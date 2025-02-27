#include<stdio.h>
int isPrime(int n){
    int flag=1;
    if(n==1)return 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1)return 1;

    else
        return 0;

    }

int main(){
    int n;
    scanf("%d",&n);
    int result = isPrime(n);
    if(result==0){
        printf("Not prime\n");
    }
    else{
        printf("prime\n");
    }
return 0;

}
