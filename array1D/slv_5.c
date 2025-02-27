#include<stdio.h>
int main(){

int n;
printf("Enter the number of array elements:");
scanf("%d",&n);
int arr[n];
printf("Enter the  array elements:");


for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max=arr[0];
int min=arr[0];
for(int i=0;i<n;i++){

    if(max<arr[i]){
        max=arr[i];
    }
    if(min>arr[i]){
        min=arr[i];
    }
}
printf("The maximum element is %d.\n", max);
printf("The minimum element is %d.\n", min);

    return 0;
}

