#include<stdio.h>
int main(){

char ch;
int a,b;
scanf("%c%d%d",&ch,&a,&b);
if(ch=='+'){
    printf("sum:%d\n",a+b);
}
else if(ch=='-'){
    printf("sub:%d\n",a-b);
}
else if(ch=='*'){
    printf("mul:%d\n",a*b);
}
else if(ch=='/'){
        if(b==0){
    printf("Division:Zero as divisor is not valid\n");
        }
        else{
            printf("Division: %d\n",a/b);
        }
}
else{
    printf("Invalid input\n");
}
return 0;
}

