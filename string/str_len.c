#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    gets(str);
    int length=0;
    int i;
    while(str[i]!='\0'){
        length++;
        i++;
    }
    printf("The length is %d \n",length);
    printf("The length is %d \n",strlen(str));
return 0;
}
