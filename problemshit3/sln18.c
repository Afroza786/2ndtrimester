#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int num,rem,res;
int rev_n=0;
num=n;
while(1){
    rem=num%10;
    res=num/10;
    rev_n=rev_n*10+rem;
    if(res==0){
        break;
    }
    num=res;
}
printf("%d\n",rev_n);
if(n==rev_n){
    printf("yes");
}
else{
    printf("No");
}
return 0;
}
