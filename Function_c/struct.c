
#include<stdio.h>
#include<string.h>

struct Student{
    char name[100];
    int rollNo;
    float cgpa;
    int credit;
};

int main(){
    struct Student s1;

    //s1.name="Clark Kent";
    strcpy(s1.name,"Clark Kent");
    s1.rollNo=12;
    s1.cgpa=3.99;
    s1.credit= 11;

    printf("name = %s\n",s1.name);
    printf("rollNo = %d\n",s1.rollNo);
    printf("Cgpa = %f\n",s1.cgpa);
    printf("Credit = %d\n",s1.credit);

    struct Student s2;
    printf("Enter the name, rollNo, cgpa and credit for student S2:\n");
    //scanf("%s",s2.name);
    gets(s2.name);
    scanf("%d",&s2.rollNo);
    scanf("%f",&s2.cgpa);
    scanf("%d",&s2.credit);

    printf("name = %s\n",s2.name);
    printf("rollNo = %d\n",s2.rollNo);
    printf("Cgpa = %f\n",s2.cgpa);
    printf("Credit = %d\n",s2.credit);

    return 0;
}
