#include <stdio.h>

int main(){
    char num[6];
    scanf("%s", &num);
    printf("%-81.1s", num);
    printf("%-81.2s", num);
    printf("%-81.3s", num);
    printf("%-81.4s", num);
    printf("%-81.5s", num);
    return 0;
}