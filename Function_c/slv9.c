#include<stdio.h>
void fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);

}
int main(){
    int n;
    scanf("%d",&n);
    fact(n);
return 0;
}
