#include<stdio.h>
#include<string.h>
int main(){
    //by using library function;
    char str1[50],str2[50];
    gets(str1);
    gets(str2);
    int result=strcmp(str1,str2);

    printf("Result=%d",result);
return 0;
}
