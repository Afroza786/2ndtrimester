#include<stdio.h>
int main(){

int n;
printf("Enter the number of array elements:");
scanf("%d",&n);
int arr1[n],arr2[n];
printf("Enter the  array elements:");
for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
    arr2[i]=arr1[i];
}
printf("you enter the  following array elements:\n");
for(int i=0;i<n;i++){
    printf("%d ",arr2[i]);
}
return 0;
}

