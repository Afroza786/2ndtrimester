#include<stdio.h>
int is_Prime(int n){
    if (n <= 1) return 0;
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

int sum_of_non_primes(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        int test = is_Prime(i);
        if(test!=1){
            printf("%d \n",i);
            sum+=i;
        }
    }
    return sum;
}
int power_of_sum(int a,int b){

    int product=1;
    for(int i=1;i<=b;i++){
            product*=a;

    }

   return product;
}
int main(){
    int x,n;
    printf("Enter the range(x):");
    scanf("%d",&x);
    printf("Enter the power(n):");
    scanf("%d",&n);
    int sum= sum_of_non_primes(x);
    printf("sum of non prime-number 1 to 10 =%d\n",sum);
    int result=power_of_sum(sum,n);
    printf("result of %d^%d = %d\n",sum,n,result);
    return 0;
}
