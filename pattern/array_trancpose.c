#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n][n];
printf("Enter the elements of array:");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

printf("\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
}

return 0;
}
