#include <stdio.h>

int main() {
    char str1[110]; // Increased size to accommodate concatenation safely
    char str2[60];
    gets(str1);
    gets(str2);

    int i = 0, j = 0, length = 0;

    // Calculate the length of str1
    while (str1[i] != '\0') {
        i++;
        length++;
    }

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[length + j] = str2[j];
        j++;
    }

    // Null-terminate str1
    str1[length + j] = '\0';

    // Print the concatenated string
    puts(str1);

    return 0;
}
