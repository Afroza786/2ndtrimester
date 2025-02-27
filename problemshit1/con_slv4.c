#include<stdio.h>

int main(){

int n1,n2,n3;

scanf("%d%d%d",&n1,&n2,&n3);
if(n1>0&&n1<180&&n2>0&&n2<180&&n3>0&&n3<180){
   if(n1+n2+n3==180){
    printf("yes\n");
   }
  else{
    printf("No\n");
  }
}
else{
    printf("Invalid input\n");
}
return 0;
}

