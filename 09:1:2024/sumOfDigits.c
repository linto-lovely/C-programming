/******************************************************************************

4)  Develop a function to calculate the sum of the digits of a given number.

*******************************************************************************/
#include <stdio.h>

int sumOfDigits(int num){
    int sum = 0;
    while(num>0){
        int rem = num%10;
        sum += rem;
        num/=10;
    }
    
    return sum;
}
int main()
{

    int a,sum;
    printf("Enter the number ");
    scanf("%d",&a);
    sum = sumOfDigits(a);
    printf("%d",sum);
    return 0;
}