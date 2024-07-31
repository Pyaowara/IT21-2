#include <stdio.h>

int main(){
    int m;
    scanf("%d", &m);
    if (m > 0){
    while (m >= 0)
        printf("%d ", m--);}
    else{
    while (m <= 0)
        printf("%d ", m++);}
}