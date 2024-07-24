#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;
    double c;
    double pro1;
    double pro2;

    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    pro1 = (floor(c / 3)*(a * 2)) + ((c - (floor(c / 3) * 3)) * a);
    pro2 = ((a * c) * ((100-b)/100));
    if (pro1 < pro2)
        printf("Buy 2 Get 1\n%.2f", pro1);
    else
        printf("Discount %.f%%\n%.2f", b, pro2);
}