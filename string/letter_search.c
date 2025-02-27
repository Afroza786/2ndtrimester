#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    gets(str);
    char c;
    scanf("%c",&c);
    for(int i=0;str[i] !='\0';i++){
        if(str[i]==c){
            printf("%d",i);
        }
    }
return 0;
}
