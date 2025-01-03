/******************************************************************************

3)  Write a program that takes a traffic light color as input 
(R for Red, Y for Yellow, G for Green) and prints the corresponding action:
     Red: "Stop"
     Yellow: "Get Ready"
     Green: "Go"

*******************************************************************************/
#include <stdio.h>

int main()
{
    char light;
    printf("Enter the color;\nR for Red\nY for Yellow\nG for Green\n");
    scanf("%c",&light);
    printf("****** ");
    switch (light){
        case 'R': printf("STOP");
        break;
        case 'Y': printf("Get Ready");
        break;
        case 'G': printf("Go");
        break;
        default: printf("invalid input");
    }
    printf(" ******");
    
    return 0;
}
