#include<stdio.h>
int find_minimum(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
return min;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Minimum  value : %d\n",find_minimum(arr,n));

return 0;
}

