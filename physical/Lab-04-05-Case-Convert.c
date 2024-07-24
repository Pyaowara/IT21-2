#include <stdio.h>

int main(){
    char a[1];
    scanf("%s", &a);


    if (97 <= a[0] && a[0] <= 122)
        printf("%c", a[0] - 32);
    else if (65 <= a[0] && a[0] <= 90)
        printf("%c", a[0] + 32);
    else
        printf("error");
}