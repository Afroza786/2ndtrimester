#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int n1;
    n1=n/2+1;
    printf("n1=%d\n",n1);

    int n2;
    n2=n-n1;
    printf("n2=%d\n",n2);

    for(int i=1;i<=n1;i++){
        for(int j=1; j<=n1-i+1  ;j++){
            printf("  ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=1;i<=n2;i++){
        for(int j=1;j<=i+1;j++){
            printf("  ");
        }
        for(int j=1;j<= 2*n2-2*i+1  ;j++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
