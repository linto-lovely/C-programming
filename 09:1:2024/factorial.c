/******************************************************************************

5)  Create a function to calculate the factorial of a number entered by the user.
*******************************************************************************/
#include <stdio.h>
void factorial(int num){
    int fact=1;
    for (int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("The factorial is %d",fact);
}
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    factorial(num);
    return 0;
}
