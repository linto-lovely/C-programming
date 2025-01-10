/******************************************************************************

1)  Write a program to develop a simple calculator using a switch statement. 
Implement functions for addition, subtraction, multiplication, and division.


*******************************************************************************/
#include <stdio.h>
void add(int A,int B){
    printf("%d + %d is %d",A,B,A+B);
}
int substract(int A, int B){
    return (A-B);
}
void multiply(int A,int B){
    printf("%d * %d is %d",A,B,A*B);
}
void divide(int A,int B){
    printf("%d / %d is %d",A,B,A/B);
}
int main()
{
	int A, B,C;
    printf("1 Addition\n2 substraction\n3 multiply\n4 divide\nEnter a choice ");
    scanf("%d",&C);

    printf("Enter the two numbers ");
    scanf("%d%d",&A, &B);
	switch (C) {
	case 1:
		add(A,B);
		break;
	case 2:
	    int sub = substract(A,B);
		printf("%d - %d is %d",A,B, sub);
		break;
	case 3:
		multiply(A,B);
		break;
	case 4:
		divide(A,B);
		break;
	default:
		printf("Invalid input");
	}

	return 0;
}