#include<stdio.h>
int main(){
int n,count,sum=0;
scanf("%d",&n);
  for(int i=1,count=2;i<=n;i++,count++){

      sum+=i*i*count;
}
printf("Result:%d",sum);

return 0;
}
