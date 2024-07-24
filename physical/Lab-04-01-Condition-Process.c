#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("%d + %d = %d", a, b, a+b);
    else
        printf("%d - %d = %d", a, b, a-b);
}