#include<stdio.h>
int main(){
    int a,b,c,A,S,M,D;
    printf("Enter two integer:");
    scanf("%d%d",&a,&b);
    printf("Enter your choice:");
    scanf("%d",&c);
    switch(c){
    case 1:A=a+b;
        printf("Addition:%d",A);
        break;
    case 2:S=a-b;
         printf("Subtraction:%d",S);
         break;
    case 3:M=a*b;
         printf("Multiplication:%d",M);
         break;
    case 4:
          switch(c){
              case 1:printf("Quotient:%d",a/b);
              break;
              case 2:printf("reminder:%d",a%b);
              break;
          }
              default:
                printf("Invalid Input");
                break;
        }

return 0;
}
