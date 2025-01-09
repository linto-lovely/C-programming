/******************************************************************************

3)  Write a program to print all odd numbers between 1 and 20 using a loop.

*******************************************************************************/

#include <stdio.h>
int main() {
    
    for (int i=2;i<20;i++){
        if (i%2==1){
            printf("%d ",i);
        }
    }
    
    return 0;
}