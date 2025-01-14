/******************************************************************************

8)  Write a program to count the number of words in a string.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int words(char str[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            // If we encounter a space, we're exiting a word
            inWord = 0;
        } else if (!inWord) {
            // If we encounter a non-space character and we're not in a word, it's a new word
            inWord = 1;
            count++;
        }
    }

    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    int wordCount = words(str);

    printf("Number of words in the string: %d\n", wordCount);

    return 0;
}
