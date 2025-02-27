#include<stdio.h>

int main(){

int n;
scanf("%d",&n);

if(n%5==0){
    printf("%d is divisible by 5",n);
}
else if(n%11==0){
    printf("%d is divisible by 11",n);
}
else{
    printf("d% is not divisible by 11 or 5",n);
}


return 0;
}
