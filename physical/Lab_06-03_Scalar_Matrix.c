#include <stdio.h>

int main(){
    double a11; double a12; double a13;
    double a21; double a22; double a23;
    double a31; double a32; double a33;

    scanf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);
    if (a12 == 0 && a13 == 0 && a21 == 0 && a23 == 0 && a31 == 0 && a32 == 0)
        printf("This is a scalar matrix");
    else
        printf("This is not a scalar matrix");
}