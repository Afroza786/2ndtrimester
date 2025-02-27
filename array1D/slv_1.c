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
printf("you enter the  following array elements:\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
