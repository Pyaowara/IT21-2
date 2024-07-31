#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    a++;
    while (a-- > 1)
        printf("%d ", a);
}