#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);

    int divider, number, result, remainder;

    // initialization
    if(a<b){
        divider=a;
        number=b;
    }else{
        divider=b;
        number=a;
    }

    while(1){
        // task
        result = number/divider;
        remainder = number%divider;

        // condition checking
        if(remainder==0){
            break;
        }

        // preparation for the next iteration
        number = divider;
        divider = remainder;
    }

    printf("The GCD is %d\n",divider);

    return 0;
}
