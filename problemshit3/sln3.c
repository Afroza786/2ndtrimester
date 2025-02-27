#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d",0);
        }
       else{
        printf("%d",1);
       }

        if(i<n){
            printf(",");
        }
}
return 0;
}

