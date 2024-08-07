#include <stdio.h>
#include <string.h>

int main(){
    char temp[100];
    scanf("%[^\n]s", temp);
    int i = strlen(temp) - 1;
    while (i + 1){
        printf("%c", temp[i]);
        i--;
    }
}