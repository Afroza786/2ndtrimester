#include<stdio.h>
int fun(int n){
    if(n==1)return 1;
    else
        return n*fun(n-1)+(*(n-2));

}
int main(){
    int n;
    scanf("%d",&n);
    printf("Funtorial of %d is %d",n,fun(n));
return 0;
}
