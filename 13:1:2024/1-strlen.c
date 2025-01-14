/******************************************************************************
1)  Write a program to calculate the length of a string using strlen().

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "Python";
    int length = strlen(str);
    printf("length is %d",length);
    return 0;
}
