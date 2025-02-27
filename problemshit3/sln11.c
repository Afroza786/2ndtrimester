#include<stdio.h>
int main(){

int n,sum=0;
scanf("%d",&n);
for(int i=1,j=2;i<=n;i++,j++){
    sum+=i*i*j;
}
printf("Result=%d",sum);

return 0;
}
