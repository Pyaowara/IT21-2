#include <stdio.h>

int main(){
    int a;
    int i;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int c = 0;

    while (1) {
        scanf("%d", &a);
        if (a < 1 || a > 20)
            continue;
        for (int i = 0; i <= 7; i++){
            if (a == M[i]){
                printf("%d is in M at index [%d]", a, i);
                c = 1;}
        }
        for (int i = 0; i <= 6; i++){
            if (a == N[i]){
                c = 1;
                printf("%d is in N at index [%d]", a, i);}
        }
        if (a >= 1 && a <= 20)
            break;
    }
    if (c == 0)
        printf("%d is not in neither M nor N", a);
}