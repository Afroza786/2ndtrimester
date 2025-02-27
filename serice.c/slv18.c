#include<stdio.h>
int main(){

int n,rev_num=0;
scanf("%d",&n);
int num,res,rem;
num=n;
while(1){

    res=num/10;
    rem=num%10;
    rev_num=rev_num*10 + rem;
    if(res==0){
        break;
    }
   else{
    num=res;
   }
}
//printf("rev=%d",rev_num);
if(rev_num==n){
    printf("yes");
}
else{
    printf("No");
}
return 0;
}
