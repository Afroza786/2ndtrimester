#include<stdio.h>
#include<string.h>
int main(){
     char s1[30]="Afroza";
     char s2[30]="Rimi";
     char temp[30];
     printf("Before swapping\n");
     printf("s1 =%s\n",s1);
     printf("s2 =%s\n",s2);
     strcpy(temp,s1);
     strcpy(s1,s2);
     strcpy(s2,temp);
     printf("\n\nAfter swapping\n");

     printf("s1 =%s\n",s1);
     printf("s2 =%s\n",s2);

return 0;
}
