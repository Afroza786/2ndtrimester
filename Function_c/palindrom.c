#include<stdio.h>
#include<string.h>
int main(){
    char s1[30]="AFROZA";
    char s2[30];
    int i=0,len=0,j;
    while(s1[i]!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++){
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf("str=%s\n",s1);
    printf("str=%s\n",s2);
    int result = strcmp(s1,s2);
    if(result==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

return 0;
}

