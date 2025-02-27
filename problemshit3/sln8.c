#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int result,reminder;
int rev_n=0;
while(1){
result=n/10;
reminder=n%10;
rev_n=rev_n*10+reminder;
if(result==0){

    break;

}
else{
    n=result;
 }

}
printf("The reverse number is:%d",rev_n);
return 0;
}
