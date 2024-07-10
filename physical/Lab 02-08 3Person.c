#include <stdio.h>

int main(){
    char fname1[30];
    char sname1[30];
    char fperson1[30];
    char sperson1[30];
    char fperson2[30];
    char sperson2[30];
    scanf("%s", fname1);
    scanf("%s", sname1);
    scanf("%s %s", fperson1, sperson1);
    scanf("%s %s", fperson2, sperson2);
    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s %s\n", fperson1, sperson1);
    printf("Person 3: %s %s\n", fperson2, sperson2);
}