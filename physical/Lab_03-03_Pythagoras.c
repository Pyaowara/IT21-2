#include <stdio.h>
#include <math.h>

int main(){
    double x;
    double y;
    double z;

    scanf("%lf", &x);
    scanf("%lf", &y);
    z = pow(x, 2) + pow(y, 2);
    printf("%.2f", sqrt(z));
}