#include<stdio.h>
int main(){
    int x;
    char y;
    double z;
    int *p1;
    char *p2;
    double *p3;

    p1 = &x;
    p2 = &y;
    p3 = &z;

    printf("p1=%d\n",p1);
    printf("p2=%d\n",p2);
    printf("p3=%d\n",p3);
    p1=p1+2;
    p2=p2+2;
    p3=p3+2;
    printf("p1=%d\n",p1);
    printf("p2=%d\n",p2);
    printf("p3=%d\n",p3);
    return 0;
}
