#include<stdio.h>
int IsPrime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
       if(n%i==0){
        flag=0;
        break;
       }
    }
    if(flag==0) return 0;
    else return 1;
}
int power_of_2(int n){
    if(n<0)return 0;
    while(n>1){

        if(n%2!=0)return 0 ;
        n/=2;
    }

    return 1;
}
int merseenprime(int n){
    if(!IsPrime(n)) return 0;
    else{
        int x=n+1;
        int power_of_2(x);
    }
}
int  main(){
    int n;
    scanf("%d",&n);
    if(merseenprime(n)){
        printf("yes");
    }

    else{
        printf("No");
    }

return 0;
}
