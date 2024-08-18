#include <stdio.h>
#include <math.h>

int main(){
    int degree;
    int  speed;
    double pi = 3.141592653589793;
    scanf("%d\n%d", &degree, &speed);
    double rade = (degree * pi) / 180;
    double result = (pow(speed, 2) * pow(sin(rade), 2)) / (2 * 9.81);
    printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", degree, speed, result);

}