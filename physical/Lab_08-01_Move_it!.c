#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    str[9] = 'A';
    char turn;
    scanf("%c %c %c", &str[0], &str[1], &str[2]);
    scanf("\n%c %c %c", &str[3], &str[4], &str[5]);
    scanf("\n%c %c %c", &str[6], &str[7], &str[8]);
    scanf("\n%c", &turn);
    int i = 0;
    while (str[i++] != '0')
        continue;
    i--;
    while (turn != 'E'){
        if (turn == 'D'){
            if (i - 3 < 0)
                break;
            str[9] = str[i - 3];
            str[i - 3] = str[i];
            str[i] = str[9];
            i = i - 3;
            }
        else if (turn == 'U'){
            if (i + 3 >= 9)
                break;
            str[9] = str[i + 3];
            str[i + 3] = str[i];
            str[i] = str[9];
            i = i + 3;
        }
        else if (turn == 'L'){
            if (i + 1 >= 9 || i == 2 || i == 5 || i == 8)
                break;
            str[9] = str[i + 1];
            str[i + 1] = str[i];
            str[i] = str[9];
            i = i + 1;
        }
        else if (turn == 'R'){
            if (i - 1 < 0 || i == 0 || i == 3 || i == 6)
                break;
            str[9] = str[i - 1];
            str[i - 1] = str[i];
            str[i] = str[9];
            i = i - 1;
        }
        else
            break;
        scanf("\n%c", &turn);
    }
    printf("%c %c %c", str[0], str[1], str[2]);
    printf("\n%c %c %c", str[3], str[4], str[5]);
    printf("\n%c %c %c", str[6], str[7], str[8]);
}