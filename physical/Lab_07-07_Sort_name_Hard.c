#include <stdio.h>
#include <string.h>

char getValue(){
    char value[61] = "";
    scanf("%s", value);
    return value;
}

char totitle(char str){
    char title[61] = "";
    int i = 0;
    int space = 1;
    while (str[i]){
        if (space && str[i] > 97){
            strcat(title, str[i] - 32);
            space = 0;
        }
        else if (!space && str[i] >= 'A' && str[i] <= 'Z')
            strcat(title, str[i] + 32);
        else
            strcat(title, str[i]);
        i++;
    }
    return title;
}

int main(){
    int n;
    scanf("%d", &n);
    char str[n][60];
    for (int i = 0; i < n; i++)
        str[i] = getValue();
    for (int j = 0; str[j]; j++)
        printf("%s", str[j]);
}