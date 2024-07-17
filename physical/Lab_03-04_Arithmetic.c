#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[99];
    double a;
    double b;
    char* token;
    scanf("%s", s);
    token = strtok(s, ",");
    a = atof(token);
    token = strtok(NULL, ",");
    b = atof(token);
    printf("The sum of the given numbers : %f\n", a + b);
    printf("The difference of the given numbers : %f\n", a - b);
    printf("The product of the given numbers : %f\n", a * b);
    printf("The quotient of the given numbers : %f", a / b);
}