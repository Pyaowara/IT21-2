#include <stdio.h>

double celsiusToFahrenheit(double celcius){
    return 32 + celcius * 1.8;
}
double fahrenheitToCelcius(double fahrenheit){
    return (fahrenheit - 32) / 1.8;
}
void printFarenheit(double fahrenheit){
    printf("%.2f f", fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2f c", celcius);
}

int main(){
    double temp;
    char sex;
    scanf("%lf %c", &temp, &sex);
    if (sex == 'f')
        printCelcius(fahrenheitToCelcius(temp));
    else
        printFarenheit(celsiusToFahrenheit(temp));
}