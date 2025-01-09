/******************************************************************************

5)  Write a program to reverse the digits of a given positive integer using a loop

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,rev,digit;
    printf("Enter the number ");
    scanf("%d",&num);
    while(num>0){
        digit = (num%10);
        rev = rev*10 + digit;
        num/=10;
    }
    printf("The reversed number is %d",rev);

    return 0;
}
