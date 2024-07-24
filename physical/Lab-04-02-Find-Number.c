#include <stdio.h>

int main(){
    double a;
    double b;
    double c;

    scanf("%lf %lf %lf", &a, &b, &c);
    if ((a <= b && b <= c) || (c <= b && b <= a))
        printf("%.2f", b);
    else if ((b <= a && a <= c) || (c <= a && a <= b))
        printf("%.2f", a);
    else if ((a <= c && c <= b) || (b <= c && c <= a))
        printf("%.2f", c);
}