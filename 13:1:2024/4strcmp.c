/******************************************************************************

4)  Write a program to compare two strings using strcmp().

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Python";
    char str2[10] = "Python";
    int result;
    result = strcmp(str2,str1);
    if (result ==0)
    {
        printf("strings are the same");
    }
    else{
         printf("strings are not the same");
    }
    return 0;
}