#include <stdio.h>

int main(){
    float a;
    float b;

    scanf("%f\n%f", &a, &b);
    a = a/100;
    b = (b / (a*a));
    printf("%f", b);
}