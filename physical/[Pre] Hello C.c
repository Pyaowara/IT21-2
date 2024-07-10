#include <stdio.h>

int main(){
    char a[99];
    char b[99];
    scanf("%s", a);
    scanf(" %[^\n]", b);
    printf("Hello! My name is %s, %s" , b, a);
}
