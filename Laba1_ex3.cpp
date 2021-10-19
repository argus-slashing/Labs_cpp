#include <iostream>
#include <cstdio>


int myStrcmp(const char* str1, const char* str2) {
    int answer = 0;
    for (int i = 0; i < 10; i++) {{
        if (str1[i] < str2[i]) {
            answer = -1;
            break;
        }
        if (str1[i] > str2[i]) {
            answer = 1;
            break;
            }
        }
    }


    return answer;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    const char str1[10] = "Passworl";
    char str2[10] = "Password";
    int answer = strcmp(str1, str2);
    printf("%d\n%d", answer, myStrcmp(str1, str2));

    

    
}

