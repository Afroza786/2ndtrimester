#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    gets(str1);
    gets(str2);
    int flag=1;
    if(strlen(str1) != strlen(str2)){
        flag=0;
    }
    else{
        for(int i=0;i != '\0';i++){
            flag=0;
            break;
        }
    }

if(flag==1) {
        printf("Equal");
}
else{
        printf("Not equal");

}


return 0;
}
