#include <stdio.h>

int main(){
    int m;
    int n;
    scanf("%d %d", &m, &n);
    if (m > n){
    while (m >= n)
        printf("%d ", m--);}
    else{
    while (m <= n)
        printf("%d ", m++);}
}