#include<stdio.h>
void negPos(int n){
    if(n==0){
        printf("Zero");
    }
    else if(n>0){
        printf("positive");
    }
    else{
        printf("Negetive");
    }
 }
int main(){
    int n;
    scanf("%d",&n);
    negPos(n);

return 0;
}

