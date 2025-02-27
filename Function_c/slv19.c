#include<stdio.h>
int isPrime(int n){
    int flag = 1;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        return 1;
    }else{
        return 0;
    }
}

void generatePrime(int n){
    for(int i=2;i<=n-1;i++){
        int test = isPrime(i);
        if(test==1){
            printf("%d ",i);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    generatePrime(n);
    return 0;
}
