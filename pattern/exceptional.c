#include<stdio.h>
int main(){
int n,count;
scanf("%d",&n);
for(int i=n;i>=1;i--){
    count=2*i;
    for(int j=0;j<n;j++){
        count=count -2;
        printf("%d ",count);
    }
    printf("\n");
}


return 0;
}
