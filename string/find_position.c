#include<stdio.h>
#include<string.h>
int main(){
char str[50];
gets(str);
int result =strlen(str);
printf("Total character in sentence:%d\n",result);
int n;
printf("position:");
scanf("%d",&n);
if(n<result){
  printf("The letter is : %c",str[n]);
}
else{
    printf("No letter at such position");
}

return 0;

}
