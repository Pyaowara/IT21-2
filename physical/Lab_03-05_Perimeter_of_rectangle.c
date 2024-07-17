#include <stdio.h>

int main(){
    double a;
    double b;
    scanf("%lf\n%lf", &a, &b);
    printf("Perimeter of rectangle = %.4f units", ((a*2) + (b*2)));
}