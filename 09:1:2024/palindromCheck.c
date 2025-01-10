/******************************************************************************

2)  Develop a function that checks whether a given number is a palindrome.

*******************************************************************************/
#include <stdio.h>
void palindromeCheck(int num){
    int rev=0;
    int number = num;
    while(num>0){
        int rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    if (number == rev){
        printf("%d is a palindrome",number);
    }
    else{
        printf("%d is not a palindrome",number);
    }
}

int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    palindromeCheck(num);
    return 0;
}
