#include <stdio.h>

int main(){
    int a = 0; int b = 0; int c = 0; int d = 0; int age; double height; double weight;
    for (int i = 0; i < 50; i++){
        int tage; double theight; double tweight;
        scanf("%d %lf %lf", &tage, &theight, &tweight);
        age += tage; height += theight; weight += tweight;
        if (tage >= 20 && theight >= 160)
            a += 1;
        if (tage < 20 && (theight <= 180 || tweight >= 60))
            b += 1;
        if (tage >= 30 && (tweight >= 40 && tweight <= 80))
            c += 1;
        if (tage < 40 && (tweight < 85 || theight <= 200))
            d += 1;
    }
    age /= 50;
    height /= 50;
    weight /= 50;
    printf("Age >= 20 and Height >= 160: %d\n", a);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", b);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", c);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", d);
    printf("Average Age: %d\n", age);
    printf("Average Height: %.2f\n", height);
    printf("Average Weight: %.2f\n", weight);
}