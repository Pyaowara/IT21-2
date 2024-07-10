#include <stdio.h>
 
int main(){
    char user1[30];
    char user2[30];
    char user3[30];
    char user4[30];
    scanf("%s", user1);
    scanf("%s", user2);
    scanf("%s", user3);
    scanf("%s", user4);
    printf("String 1: %.3s\n", user1);
    printf("String 2: %.4s\n", user2);
    printf("String 3: %.5s\n", user3);
    printf("String 4: %.6s", user4);
}