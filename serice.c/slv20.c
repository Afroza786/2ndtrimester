#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int term=1,sum=0;
for(int i=1;i<=n;i++){

    if(i==1){
        sum=term;
    }
    else{
        sum=sum+term*10+i;
        term=term*10+i;
    }
}
printf("sum=%d",sum);

return 0;
}
