#include <stdio.h>

int main(){
    double a;
    double b;
    double c;
    double d;
    double sum;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    sum = a + b + c + d;
    printf("Summation is %.2f\n", sum);
    printf("Average is %.3f", sum/4);
}