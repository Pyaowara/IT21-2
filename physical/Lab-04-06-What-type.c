#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    scanf("%c", &a);

    if isdigit(a)
        printf("number");
    else if islower(a)
        printf("lowercase");
    else if isupper(a)
        printf("uppercase");
    else
        printf("error");
}