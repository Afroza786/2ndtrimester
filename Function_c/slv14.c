#include<stdio.h>
int find_even(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    find_even(arr,n);

return 0;
}
