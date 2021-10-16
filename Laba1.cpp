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
        }
    }
    printf("%s \n", result_.c_str());
    return 0;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[15];
    initalizationArray(arr);
    processArray(arr);
    
}

