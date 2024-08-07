#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(const char *s1, const char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main(){
    char str[300] = "";
    char a[300];
    char *posi = "Position: ";
    char temp[1];
    scanf("%[^\n]s", str);
    scanf("\n%[^\n]s", a);
    char real_a = a[0];
    int b = 0;
    for (int i = 0; str[i]; i++){
        printf("%d\n", &i);
        printf("%c and %c\n", real_a, str[i]);
        if (real_a == str[i]){
            sprintf(temp, "%d", i + 1);
            if (posi == "Position: "){
                posi = concat(posi, temp);
            }
            else{
                posi = concat(posi, ", ");
                posi = concat(posi, temp);
            }
            b++;
        }
    }
    if (b){
        printf("There is/are %d \"%c\" in the above sentences.", b, real_a);
        printf("%s", posi);
    }
    else
        printf("Not found.");

}