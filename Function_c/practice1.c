#include<stdio.h>
void incrementer(int * p, int size){
    for(int i=0;i<size;i++){
        *p = *p+10;
         p++;
    }
}
void printArray(int * p, int size){
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
}

int main(){
    int arr[] = {10,20,30,40};
    printArray(&arr[0],4);
    incrementer(&arr[0],4);
    printArray(&arr[0],4);
    return 0;
}

