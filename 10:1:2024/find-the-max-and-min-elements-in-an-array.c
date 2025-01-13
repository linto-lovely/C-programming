/******************************************************************************

Write a program to find the maximum and minimum elements in an array of integers.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    printf("Enter the %d elements ",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    int min=arr[0];
    
    printf("the elements are ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("\n%d is the greatest of numbers",max);
    printf("\n%d is the lowest of numbers",min);

    return 0;
}
