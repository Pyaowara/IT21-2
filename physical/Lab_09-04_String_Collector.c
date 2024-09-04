#include <stdio.h>
#include <stdlib.h>

int main(){
    char *arr = NULL;
    char t;
    int size = 0;
    while (1){
        scanf(" %c", &t);
        if (t == '-')
            break;
        size++;
        char *temp = (char*) realloc(arr, sizeof(char)*(size+1));
        arr = temp;
        *(arr+(size-1)) = t;
    }
    while (size--)
        printf("%c", *arr++);
    arr--;
    printf("\n");
    while (*arr)
        printf("%c", *arr--);
}