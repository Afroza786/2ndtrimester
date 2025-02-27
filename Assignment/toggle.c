#include<stdio.h>
#include<string.h>
int toggleLetters(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }


}
int main(){
        char str[100];
        printf("Enter string : ");
        gets(str);
        toggleLetters(str);
        printf("%s",str);



return 0;
}
