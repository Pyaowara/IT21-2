#include <stdio.h>
#include <math.h>

int main(){
    double x, y;
    scanf("%lf %lf", &x, &y);

    printf("sqrt(%.lf^2+%.lf^2)=%.2f", x, y, (sqrt((x*x) + (y*y))));
}