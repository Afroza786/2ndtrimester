#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};

    int *p=arr;
    p=&arr[0];
    int i,j;
    for(i=0, j=3;i<j;i++,j--){
            int temp= *(p + j);
            *(p+j)=temp;

    }

   for(int j=0;j<3;j++){
    printf(" %d",arr[j]);
   }

return 0;
}

