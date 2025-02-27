#include<stdio.h>

int returnFunction(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*2;
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    returnFunction(arr,n);
return 0;
}
