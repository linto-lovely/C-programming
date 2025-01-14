/******************************************************************************

6)  Write a program to check if a string is a palindrome using string methods.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char inputStr[30];

    // Remove the newline character if present
    if (str[end] == '\n') {
        str[end] = '\0';
        end--;
    }
    strcpy(inputStr, str);

    while (start < end) {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
    }
    
    if (strcmp(inputStr,str)==0){
        printf("\n%s is a palindrome string\n",str);
    }
    else{
        printf("\n%s is not a palindrome string\n",inputStr);
    }
}

int main() {
    char str[30];
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    isPalindrome(str);
    return 0;
}

