#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int count=1;
for(int i=1;count<=n;i+=2,count++){
        printf("%d",i);

        if(count<n){
            printf(",");
        }
}
return 0;
}

