#include<stdio.h>

int main(){
float a,b;
int choice;
scanf("%d%f%f",&a,&b,&choice);
if(choice==1){
    printf("Addition:%d",a+b);
}
else if(choice==2){
    printf("Subtraction:%d",a-b);
}
else if(choice==3){
    printf("Multiplication:%d",a*b);
}
else if(choice==4){
    printf("Division:%d",a/b);
}
else{
    printf("Invalid choice\n");
}
return 0;
}


