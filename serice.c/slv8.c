#include<stdio.h>
int main(){

int n;
printf("sample input\n");
scanf("%d",&n);
int num,result,reminder;
int rev_num=0;
num=n;
  while(1){

    result = num/10;
    reminder = num%10;
    rev_num = rev_num*10 + reminder;
    if(result==0){
        break;
    }
    else{
        num=result;
    }

   }
   printf("sample output\n%d",rev_num);
return 0;
}
