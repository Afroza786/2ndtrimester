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
for(int i=0,j=n-1;i<j;i++,j--){
    int temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;

}
printf("your array after reversing: \n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}

