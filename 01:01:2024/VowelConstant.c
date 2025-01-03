/******************************************************************************
1)  Write a program that takes a single character as input and uses a 
switch statement to check whether it is vowel or consonants


*******************************************************************************/
#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a lower case character (a to z)");
	scanf("%c",&ch);
	switch (ch) {
	case 'a':
		printf("Entered alphabet (%c) is a vowel",ch);
		break;
	case 'e':
		printf("Entered alphabet (%c) is a vowel",ch);
		break;
	case 'i':
		printf("Entered alphabet (%c) is a vowel",ch);
		break;
	case 'o':
		printf("Entered alphabet (%c) is a vowel",ch);
		break;
	case 'u':
		printf("Entered alphabet (%c) is a vowel",ch);
		break;

	default:
		printf("Entered alphabet is a constant");
	}

	return 0;
}
