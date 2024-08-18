#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("method = 1\n");
    else if (n == 2)
        printf("method = 2\n");
    else{
        int prev1 = 2; 
        int prev2 = 1;
        int current;
        for (int i = 3; i <= n; i++) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        printf("method = %d\n", current);
    }
}