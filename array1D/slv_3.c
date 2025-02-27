#include<stdio.h>
int main(){

int n;
int sum=0;
printf("Enter the number of array elements:");
scanf("%d",&n);
int arr[n];
printf("Enter the  array elements:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
printf("The sum of your array elements is :%d",sum);
return 0;
}

