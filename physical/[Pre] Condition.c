#include <stdio.h>
int main()
{
    double num;
    scanf("%lf", &num);
    if(num < 0 || num > 58.855)
        printf("InValid");
    else if(num <= 5.032)
        printf("Bangkok");
    else if(num <= 35.477)
        printf("Samut Prakarn");
    else if(num <= 52.900)
        printf("Chachoengsao");
    else if(num <= 58.855)
        printf("Chon Buri");
}