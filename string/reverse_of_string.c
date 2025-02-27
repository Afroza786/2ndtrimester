#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    gets(str1);
    int i,j,len=0;
    for(i=0;str1[i]!='\0';i++){
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++){
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("string :%s\n",str1);
    printf("Reverse string:%s\n",str2);
return 0;
}
