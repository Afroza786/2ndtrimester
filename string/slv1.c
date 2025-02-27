#include <stdio.h>
#include <string.h>
int main() {
char str1[50] = "Programming";
char str2[50] = "Languages";
int len = strlen(str1);
for (int i = 0; i < strlen(str2); i++)
str1[len - i - 1] = str2[i];
strncat(str1, str2, 3);
for (int j = 0; j < 5; j++)
str1[j] = str2[strlen(str2) - j - 1];
printf("str1: %s\n", str1);
printf("str2: %s\n", str2);
return 0;
}
