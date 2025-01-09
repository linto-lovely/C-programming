/******************************************************************************

Write a program to calculate the sum of the digits of a given positive integer using a loop. 


*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, sum, digit;


    printf("Enter the number");
    scanf("%d",&num);

    while (num>o){
        digit = num % 10;
        sum+= digits;
        num /= 10;
    }
    printf("The sum is %d",sum);
    
    return 0;
}
