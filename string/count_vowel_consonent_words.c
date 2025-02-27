#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character added by fgets, if any
    str[strcspn(str, "\n")] = '\0';

    int word = 0, vowel = 0, consonant = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') { // Check for spaces to count words
            if (i > 0 && str[i - 1] != ' ') { // Avoid counting consecutive spaces
                word++;
            }
        } else if (isalpha(str[i])) { // Check if the character is alphabetic
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
                str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                vowel++;
            } else {
                consonant++;
            }
        }
    }

    // Account for the last word if the string is not empty
    if (strlen(str) > 0 && str[strlen(str) - 1] != ' ') {
        word++;
    }

    printf("Words: %d\n", word);
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
    printf("Letters: %d\n", vowel + consonant);

    return 0;
}
