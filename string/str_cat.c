#include<stdio.h>
#include<string.h>
void strconcat(char str1[],char str2[]){
    int i;
    for(i=0;str1[i]!='\0';i++){
        //do nothing;
    }
    int j=0;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]=str2[j];

}
int main(){
    char str1[50];
    char str2[50];
    //By using library function
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    printf("%s",str1);

    //without using library function;

    strconcat(str1,str2);
return 0;
}
