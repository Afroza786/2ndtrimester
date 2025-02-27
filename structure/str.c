#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] = "zebra";
    //strchr(str1,'b');
    char *p = strchr("zebra",'b');
    if(p==NULL){
        printf("This character is NOT inside the word zebra\n");
    }else{
        printf("This character is inside the word zebra\n");
    }
    printf("The address stored in p is %d\n",p);
    printf("The value at the location pointed to by p %c\n",*p);
}

