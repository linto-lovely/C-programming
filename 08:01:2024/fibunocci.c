/******************************************************************************

2) Write a program to generate the first n terms of the Fibonacci series using a loop, where n is provided by the user.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // int A = 0;
    // int B = 1;
    // printf("Before swapping\nA=%d\nB=%d\n",A,B);
    // int temp = A;
    // A = B;
    // B = temp;
    
    // printf("After swapping\nA=%d\nB=%d",A,B);
    
    int First = 0;
    int Second = 1;
    int n, sum;
    printf("Enter the limit");
    scanf("%d",&n);
    printf("%d %d ",First,Second);
    
    for (int i=2; i<n; i++){
        sum = First + Second;
        printf("%d ",sum);
        First = Second;
        Second = sum;
        
    }
    
    return 0;
}