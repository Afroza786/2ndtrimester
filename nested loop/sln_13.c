#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
     if(i!=n){
    for(int j=1;j<=2*n-2*i-1;j++){
        printf("_");
    }
     }

        for(int j=i;j>=1;j--){
                if(j==n){

                }
                else{
            printf("%d",j);
                }
        }

    printf("\n");
}
return 0;
}
