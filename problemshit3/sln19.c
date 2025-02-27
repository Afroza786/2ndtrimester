#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int num,rem,res;
int rev_n=0;
num=n;
int sum=0;
for(int i=1;i<=n;i++){
    rem=num%10;
    res=num/10;
    rev_n=rev_n*10+rem;
    sum+=rev_n;
    if(res==0){
        break;
    }
    num=res;
    sum+=rev_n;
}
printf("%d\n",sum);

return 0;
}

