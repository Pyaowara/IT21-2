#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};


int main(){
    int i;
    int j = 0;
    int check = 0;
    char idi[10];
    scanf("%d", &i);
    struct Record Record[i];
    while (j < i){
        scanf("%s %s %ld %ld", Record[j].id, Record[j].name, &Record[j].salary, &Record[j].sales);
        j++;
    }
    scanf("%s", idi);
    j = 0;
    while (j < i){
        if (strcmp(idi, Record[j].id) == 0){
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf", Record[j].id, Record[j].name, Record[j].sales, Record[j].sales * 0.02, Record[j].salary, Record[j].salary + (Record[j].sales * 0.02));
            check = 1;
            break;
        }
        j++;
    }
    if (!check){
        printf("ID not found !!!");
    }
}