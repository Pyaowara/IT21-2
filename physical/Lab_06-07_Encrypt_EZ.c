#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char en[] = "ABXYPQRMNCEDKLJOSHTUFVZGWIABXYPQRMNCEDKLJOSHTUFVZGWI";
    char str[200] = "";
    scanf("%[^\n]s", str);
    int i = 0;
    int j;
    
    while (str[i]){
        j = strlen(en) - 1;
        if (isalpha(str[i]))
            while (en[j--]){
                if (toupper(str[i]) == en[j]){
                    if (islower(str[i]))
                        printf("%c", en[j-5] + 32);
                    else
                        printf("%c", en[j-5]);
                    break;
                }
            }
        else
            printf("%c", str[i]);
        i++;
    }
}