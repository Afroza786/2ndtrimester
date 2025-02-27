#include<stdio.h>

int main(){

int n;

scanf("%d",&n);
if(n>0){
    if((n&(n-1))==0){
    printf("Yes\n");
}
else{
    printf("No\n");
  }
}
else if(n==0){
    printf("Zero is not a valid input\n");
}
else{
    printf("Negative input is not valid\n");
}
return 0;
}


