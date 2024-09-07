#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int f;
    scanf("%d", &i);
    scanf("\n%d", &f);

    char *str = (char *) malloc(sizeof(char) * (i + 1));
    scanf("\n%[^\n]s", str);
    while (*str){
        printf("%c", *str);
        str = str + f;
    }
}