#include <stdio.h>

int main(){
    double a;

    scanf("%lf", &a);
    if ((a >= 80) && (a<=100))
        printf("A");
    else if ((a >= 70) && (a < 80))
        printf("B");
    else if ((a >= 60) && (a < 70))
        printf("C");
    else if ((a >= 50) && (a < 60))
        printf("D");
    else if ((a >= 0) && (a < 50))
        printf("F");
    else
        printf("Out of Range");

}