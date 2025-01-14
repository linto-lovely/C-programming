/******************************************************************************

9)  Write a program to remove all whitespaces from a string.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeWhitespaces(char str[]) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    removeWhitespaces(str);

    printf("String after removing all whitespaces: %s\n", str);

    return 0;
}
