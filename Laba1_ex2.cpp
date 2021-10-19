#include <iostream>
#include <iomanip>
#include <cmath> 

#define PI 3.14159265      

double initilizationArray(double *arr) {
    for(int i = 0; i < 25;i++) {
        *(arr + i) = i * sin(i*PI /25);
    }
    return 0;
}
double transformArray(double *firstArr, double **resultArr) {
    int k = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            *(*(resultArr + i) +j) = *(firstArr + k);
            *(*(resultArr + i)) += *(firstArr + k);
            /*if (k % 5 == 0) {
                *(*(resultArr + i)) = 0;
            }*/
            k++;
        }
        *(*(resultArr + i)) -= *(firstArr + k - 5)*2;
    }
    return 0;
}
double printArray(double **resultArr) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << std::left << std::setw(10) << *(*(resultArr + i) + j);
        }
        std::cout << std::endl;
    }
    return 0;
}
int main()
{
    double *firstArray_ = new double[25];
    double **resultArray = new double *[5];
    for (int i = 0; i < 5; i++) {
        *(resultArray + i) = new double[5];
    }
    initilizationArray(firstArray_);
    transformArray(firstArray_, resultArray);
    printArray(resultArray);
    delete[] firstArray_;
    for (int i = 0; i < 5; i++) {
        delete *(resultArray + i);
    }
    delete[] resultArray;

}


