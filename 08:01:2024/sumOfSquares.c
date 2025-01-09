/******************************************************************************

4)  Write a program to calculate the sum of squares of the first 10 natural numbers using a loop.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int sum;
    
    for (int i=1; i<11; i++){
        sum += (i*i);
    }
    printf("%d",sum);

    return 0;
}
