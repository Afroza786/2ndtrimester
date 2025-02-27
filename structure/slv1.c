#include<stdio.h>
struct student{
    char name[50];
    char id[15];
    float cgpa;
};
int main(){
    struct student s1;

    printf("Enter student name:");
    gets(s1.name);
    printf("Enter student id:");
    gets(s1.id);
    printf("Enter student cgpa:");
    scanf("%f",&s1.cgpa);

    printf("\n student Information:\n");
    printf("Name:");
    puts(s1.name);
    printf("Id:");
    puts(s1.id);
    printf("CGPA:");
    printf("%f",s1.cgpa);

    return 0;

}
