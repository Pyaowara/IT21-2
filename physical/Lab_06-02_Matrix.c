#include <stdio.h>

int main(){
    double a11; double a12; double a13;
    double a21; double a22; double a23;
    double a31; double a32; double a33;
    double b11; double b12; double b13;
    double b21; double b22; double b23;
    double b31; double b32; double b33;
    scanf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);
    scanf("%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf", &b11, &b12, &b13, &b21, &b22, &b23, &b31, &b32, &b33);

    double c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
    double c12 = (a11 * b12) + (a12 * b22) + (a13 * b32);
    double c13 = (a11 * b13) + (a12 * b23) + (a13 * b33);
    double c21 = (a21 * b11) + (a22 * b21) + (a23 * b31);
    double c22 = (a21 * b12) + (a22 * b22) + (a23 * b32);
    double c23 = (a21 * b13) + (a22 * b23) + (a23 * b33);
    double c31 = (a31 * b11) + (a32 * b21) + (a33 * b31);
    double c32 = (a31 * b12) + (a32 * b22) + (a33 * b32);
    double c33 = (a31 * b13) + (a32 * b23) + (a33 * b33);

    printf("A x B\n");
    printf("%.2f %.2f %.2f\n", c11, c12, c13);
    printf("%.2f %.2f %.2f\n", c21, c22, c23);
    printf("%.2f %.2f %.2f", c31, c32, c33);
}