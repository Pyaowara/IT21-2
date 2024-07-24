#include <stdio.h>

int main(){
    double a;
    double b;
    double c;
    scanf("%lf\n%lf\n%lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("Triangle is valid.");
    else
        printf("Triangle is not valid.");
}