/******************************************************************************

Write a program to reverse the elements of an array and print the reversed array


*******************************************************************************/
#include <stdio.h>

int main()
{
    // int arr[] = {2,4,6,8,10};
    // int length = sizeof(arr)/sizeof(arr[0]);
    int length;
    
    printf("Enter the number of elements ");
    scanf("%d",&length);
    printf("length is %d\n",length);
    int arr[length];
    
    printf("Enter the %d elements ",length);
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("The array element is :);
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }

    int temp[length];
    for(int i=0;i<length;i++){
        temp[i] = arr[length-i-1];
    }
    printf("\nReversed array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;

    
}
