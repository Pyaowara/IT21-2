#include <stdio.h>

int main(){
    double price;
    double dia;
    double height;

    scanf("%lf\n%lf\n%lf", &price, &dia, &height);
    double volumn = height * 3.14159265359 * (dia / 2) * (dia / 2);
    printf("Volume : %.2fml\n", volumn);
    printf("Baht/ml : %.4f", (price/volumn));
}