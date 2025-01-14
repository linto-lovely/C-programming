/******************************************************************************

5)  Write a program to convert a string to uppercase using strupr() (or manual iteration).
5)  Write a program to convert a string to lowercase using strlwr() (or manual iteration).


*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] ="hello";
    strupr(str1);
    printf("Upper case: %s",str1);
    strlwr(str1);
    printf("Lower case: %s",str1);

    return 0;
}