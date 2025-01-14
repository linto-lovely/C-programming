/******************************************************************************

3)  Write a program to concatenate two strings using strcat().


*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Python";
    char str2[10] = " Dev";
    strcat(str1,str2);
    printf("%s",str1);

    return 0;
}

