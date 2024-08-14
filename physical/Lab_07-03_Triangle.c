#include <stdio.h>
#include <math.h>

double perimeter(double a, double b){
    double c = pow(a, 2) + pow(b, 2);
    return pow(c, 0.5) + a + b;
}

double area(double a, double b){
    return ((0.5) * b * a);
}

int main(){
    double a;
    double b;
    scanf("%lf\n%lf", &a, &b);
    printf("Perimeter: %.2f\n", perimeter(a, b));
    printf("Area: %.2f", area(a, b));
}