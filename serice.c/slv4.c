#include<stdio.h>
int main(){

int n;
int sum=0,avg;
int num;
 scanf("%d",&n);
  for(int i=1;i<=n;i++){
     scanf("%d", &num);
        sum += num;
}
   avg=sum/n;
  printf("AVG of %d inputs: %d\n", n, avg);
return 0;
}
