#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    scanf("%d", &a);
    b = a;
    int day = floor(a/86400);
    a = a % 86400;
    int hour = floor(a/3600);
    a = a % 3600;
    int minu = floor(a/60);
    a = a % 60;
    printf("%d s = %d d %d h %d m %d s", b, day, hour, minu, a);
}