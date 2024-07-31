#include <stdio.h>

int main(){
    int sum = 0;
    int temp;
    do{
        scanf("%d", &temp);
        if (temp != -9)
            sum = sum + temp;
    }while(temp != -9);
    printf("%d", sum);
}