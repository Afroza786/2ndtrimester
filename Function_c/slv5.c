#include<stdio.h>
void greater_equal(int a,int b){
    if(a==b){
        printf("%d is equal to %d",a,b);
    }
    else if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is less than %d",a,b);
    }
 }
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    greater_equal(a,b);

return 0;
}


