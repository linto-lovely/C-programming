/******************************************************************************
10) Write a program to remove duplicate characters from a string.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
	int flag[256] = {0}; // Array to track occurrences of characters
	int i = 0, j = 0;

	while (str[i] != '\0') {
		if (flag[str[i]] == 0) { // Check if the character is seen for the first time
			flag[str[i]] = 1; // Mark character as seen
			str[j++] = str[i]; // Add the character to the result
		}
		i++;
	}
	str[j] = '\0'; // Null-terminate the modified string
}

int main() {
	char str[200];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	// Remove the trailing newline character if present
	str[strcspn(str, "\n")] = '\0';

	removeDuplicates(str);

	printf("String after removing duplicate characters: %s\n", str);

	return 0;
}

