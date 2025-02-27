#include <stdio.h>


int is_prime(int x) {
    int flag=1;
    for(int i=2;i<x;i++){
        if(x%i== 0){
            flag=0;
            break;
        }
    }
    if(flag==0)return 0;
    else return 1;
}

int power_of_2(int x) {
    if (x < 1) return 0;
    while (x > 1) {
        if (x % 2 != 0) return 0;
        x /= 2;
    }
    return 1;
}

int is_mersenne(int x) {
    if (!is_prime(x)) return 0;
    int n = x + 1;
    return power_of_2(n);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_mersenne(n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

