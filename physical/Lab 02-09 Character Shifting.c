#include <stdio.h>

int main(){
    int u1;
    int u2;
    int u3;
    int u4;
    int u5;
    scanf(" %[^\n]", &u1);
    scanf(" %[^\n]", &u2);
    scanf(" %[^\n]", &u3);
    scanf(" %[^\n]", &u4);
    scanf(" %[^\n]", &u5);
    printf("%c\n", u1 + 1);
    printf("%c\n", u2);
    printf("%c\n", u3 + 1);
    printf("%c\n", u4);
    printf("%c", u5 + 1);
}