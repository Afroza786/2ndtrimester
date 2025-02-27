#include<stdio.h>
void printArray(int *arr,int size){
    printf("\n\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void incrementerArray(int *arr,int size){
 for(int i=0;i<size;i++){
       *arr=*arr+10;
       arr++;
    }

}
int main(){
    int arr[]={1,2,3,4};
    printArray(&arr[0],4);
    incrementerArray(&arr[0],4);
    printArray(&arr[0],4);

return 0;
}
