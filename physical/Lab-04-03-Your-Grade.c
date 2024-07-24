#include <stdio.h>
#include <ctype.h>

int main(){
    char a[1];
    scanf("%s", a);
    a[0] = tolower(a[0]);
    // if (a[0] == 'a')
    //     printf("Genius");
    // else if (a[0] == 'b')
    //     printf("Good");
    // else if (a[0] == 'c')
    //     printf("Try Harder");
    // else if (a[0] == 'd')
    //     printf("Very Bad");
    // else if (a[0] == 'f')
    //     printf("Fail");
    // else
    //     printf("Invalid Input");
    switch (a[0]){
        case 'a':
            printf("Genius");
            break;
        case 'b':
            printf("Good");
            break;
        case 'c':
            printf("Try Harder");
            break;
        case 'd':
            printf("Very Bad");
            break;
        case 'f':
            printf("Fail");
            break;
        default:
            printf("Invalid Input");
            break;
    }
}