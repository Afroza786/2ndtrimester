#include<stdio.h>
void print_fun(ch)
{

printf("Value received from main: %c",ch);
}
int main()

{

char ch;
scanf("%c",&ch);
print_fun(ch);

return 0;
}
