/******************************************************************************

3)  Write a program to find the maximum of three numbers using a function.


*******************************************************************************/
#include <stdio.h>
void maxNumber(int A,int B,int C){
    int temp;
    if (A>B){
        printf("%d is largest among the three",A);
    }
    else if (B>C){
        printf("%d is largest among the three",B);
    }
    else{
        printf("%d is largest among the three",C);
    }
}
int main()
{
    int A,B,C;
    printf("Enter three numbers");
    scanf("%d%d%d",&A,&B,&C);
    maxNumber(A,B,C);

    return 0;
}
