/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <random>

int initalizationArray(int arr[]) {
    for (int i = 0; i < 15; i++) {
        arr[i] = i;
    }
    return 0;
}
int processArray(int arr[]) {
    int a_;
    int b_;
    int count = 0;
    std::string result_;
    bool check_ = true;
    while (check_) {
        printf("введите число a: ");
        scanf("%d", &a_);
        printf("\n");
        if (a_ > 0) {
            printf("Неверно, a < 0. Попробуйте еще раз!\n");
        }
        else
        {
            check_ = false;
        }
    }
    printf("введите число b: ");
    scanf("%d", &b_);
    for (int i = 1; i < 15; i += 2) {
        arr[i] *= a_ + rand() % (b_ - a_ + 1);
        if (arr[i] < 0) {
            result_ += std::to_string(arr[i]) + "\t";
            count++;
        }
    }
    printf("%s \n", result_.c_str());
    return count;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[15];
    initalizationArray(arr);
    printf("К-во отрицательных элементов %d", processArray(arr));

}