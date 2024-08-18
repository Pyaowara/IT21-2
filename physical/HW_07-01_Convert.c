#include <stdio.h>

char swapchar(int c)
{
    if ('a' <= c && c <= 'z')
        return c - 32;
    else if ('A' <= c && c <= 'Z')
        return c + 32;
    return c;
}

char ft_tolower(int c){
    if ('A' <= c && c <= 'Z')
        return c + 32;
    return c;
}

int main(){
    char str1[102] = "";
    char str2[102] = "";
    int check = 1;
    int i = 0;

    scanf("%[^\n]s", str1);
    scanf("\n%[^\n]s", str2);

    while (str1[i])
    {
        if (ft_tolower(str1[i]) != ft_tolower(str2[i]))
            check = 0;
        i++;
    }
    printf("*** Results ***\n");
    for (int j = 0; str1[j] != '\0'; j++)
        printf("%c", swapchar(str1[j]));
    printf("\n");
    for (int j = 0; str2[j] != '\0'; j++)
        printf("%c", swapchar(str2[j]));
    printf("\n***************\n");
    if (check)
        printf("Both strings are the same.\n");
    else
        printf("Both strings are not the same.\n");
}