#include<stdio.h>
int IsPrime(int n){
    if(n<=1)return 0;
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        return 0;
    }
    else{
        return 1;
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int result=IsPrime(n);
    if(result==0){
        printf("Not prime");
    }
    else{
        printf("prime");
    }


}
