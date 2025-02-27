#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int i;
for(int i=1;i<=n;i++){
printf("%d",i);
if(i<n){
    printf(",");
}
}

return 0;
}
