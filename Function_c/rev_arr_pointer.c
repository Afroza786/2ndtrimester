#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};

    int *p1,*p2;
    p1=&arr[0];
    p2=&arr[3];
    while(p1<p2){
        int temp=*p1;
        *p1=*p2;
        *p2=temp;
        p1++;
        p2--;
    }
   for(int i=0;i<3;i++){
    printf(" %d",arr[i]);
   }

return 0;
}
