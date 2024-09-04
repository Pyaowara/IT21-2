#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    char *arr = (char *) malloc(sizeof(char) * 101);
    char t;
    int size = 1;
    scanf("%[^\n]s", arr);
    while (*(arr++)){
        printf("%c", *arr);
    }
    // for (int i = 0; i < floor(size/2); i++) {
    //     swap((arr+i), (arr+size-1-i));
    // }
    printf("%c", *arr--);
    while (*arr--) {
        printf("%c", *arr);
    }
}