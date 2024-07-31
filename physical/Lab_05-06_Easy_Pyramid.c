#include <stdio.h>

int main(){
    int a;
    int ncount = 1;
    scanf("%d", &a);

    while (a){
        int count = 0;
        while (count++ < a - 1)
            printf(" ");
        count = ncount;
        while (count--)
            printf("*");
        ncount += 2;
        a--;
        printf("\n");
    }
}