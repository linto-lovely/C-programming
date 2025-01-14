/******************************************************************************

2)  Write a program to copy one string to another using strcpy().

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Python";
    char str2[10];
    strcpy(str2,str1);
    printf("%s",str1);

    return 0;
}
