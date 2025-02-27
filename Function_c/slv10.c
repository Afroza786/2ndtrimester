#include<stdio.h>
void power(int a,int b){
    int product=1;
    for(int i=1;i<=b;i++){
        product*=a;
    }
    printf("%d to the power %d is %d",a,b,product);

}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    power(a,b);
return 0;
}
