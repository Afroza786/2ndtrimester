#include<stdio.h>
int SumFunction(int n){
    int sum=0;
    int num;

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    printf("Sum in Function:%d",sum);
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=SumFunction(n);
    printf("Sum In Main:%d\n",result);

return 0;
}
