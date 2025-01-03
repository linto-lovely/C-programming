/******************************************************************************
4)  Write a program that takes a temperature and the convert celsius to fahrenheit
*******************************************************************************/
#include <stdio.h>

int main()
{
     float A;
   
    printf("Enter the temperature in °C\n");
    scanf("%f",&A);
    // °C × (9/5) + 32.
    float F = (A * (9.0/5.0)) + 32;
    printf("%.2f",F);

    return 0;
}
