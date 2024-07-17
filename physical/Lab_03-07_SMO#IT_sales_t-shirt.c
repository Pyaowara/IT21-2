#include <stdio.h>

int main(){
    double a;
    double b;
    int c;
    scanf("%lf\n%lf\n%d", &a, &b, &c);
    double price = a * ((100 - b)/100);
    printf("%.2f", price*c);

}