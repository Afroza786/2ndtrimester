#include<stdio.h>
int main(){

int n1,n2;
scanf("%d%d",&n1,&n2);
int num,div,rem,res;
if(n1>n2){
    num=n1;
    div=n2;
}
else{
    num=n2;
    div=n1;
}

while(1){

    res=num/div;
    rem=num%div;
    if(rem==0){
        break;
    }
    else{
        num=div;
        div=rem;
    }
}
printf("GCD = %d\n",div);
int mul,lcm;
mul=n1*n2;
lcm=mul/div;
printf("LCM=%d",lcm);
return 0;
}
