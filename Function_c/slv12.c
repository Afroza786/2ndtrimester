#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Value in function:%d %d\n",a,b);

}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("Value in main:%d %d\n",a,b);

return 0;
}
