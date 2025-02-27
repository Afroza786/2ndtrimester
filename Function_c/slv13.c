#include<stdio.h>
int main()
{
    int x,y;
    printf("Before the swapping number:");
    scanf("%d%d",&x,&y);
    int *p1=&x;
    int *p2=&y;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("After the swapping number:%d\n%d",x,y);

}
