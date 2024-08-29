#include <stdio.h>
#include <ctype.h>
#include <string.h>

void totile(char str[]){
    int check = 0;
    for (int i = 0; i < strlen(str); i++){
        if (isspace(str[i]))
            check = 0;
        else{
            if (check == 0){
                str[i] = toupper(str[i]);
                check = 1;
            }
            else
                str[i] = tolower(str[i]);
        }
    }
}

void bubbleSort(char arr[][60]) {
    char temp[60];
    int swapped;
    
    for (int i = 0; i < 20-1; i++) {
        for (int j = 0; j < 20-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

int main(){
    char name[20][60];
    char temp[60];
    scanf("%[^\n]s", name[0]);
    totile(name[0]);
    for (int i = 1; i < 20; i++){
        scanf("\n%[^\n]s", name[i]);
        totile(name[i]);
    }
    bubbleSort(name);
    for (int i = 0; i < 20; i++)
        printf("%s\n", name[i]);
}
