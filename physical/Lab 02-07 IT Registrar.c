#include <stdio.h>
int main(){
    char name[30];
    char sur[30];
    int id;
    int date;
    int month;
    int year;
    float gpa;
    scanf("%s", name);
    scanf("%s", sur);
    scanf("%d", &id);
    scanf("%d/%d/%d", &date, &month, &year);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", name, sur);
    printf("ID: %d\n", id);
    printf("DOB: %02d-%02d-%02d\n", date, month, year);
    printf("GPA: %.2f", gpa);
}