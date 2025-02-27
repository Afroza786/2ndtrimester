
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n****************\n");
    for(int i=0;i<=size-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n****************\n");

    for(int i=0,j=size-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("\n****Rev. Array*******\n");
    for(int i=0;i<=size-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n**********************\n");

    return 0;
}
