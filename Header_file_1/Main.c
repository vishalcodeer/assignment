#include"arraylib.h"
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the number  you are going to enter in your array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements now:\n",size);
    for (int i=0;i<size;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Maximum is at index %d\n",findMaxIndex(arr,size));
    printf("Minimum is at index %d\n",findMinIndex(arr,size));
    displayArray(arr,size);
    reverseArray(arr,size);
    displayArray(arr,size);
    printf("Average of all the elements of arrays is %f\n",findAverage(arr,size));
    sortArray(arr,size);
    displayArray(arr,size);
    char a;
    printf("Do you want to do a linear search in the array (Y/N): ");
    scanf(" %c",&a);
    if (a=='Y'||a=='y')
    {
        int value;
        printf("Which value you wanna find in the array: ");
        scanf("%d",&value);
        int pos=linearSearch(arr, size, value);
        if (pos==-1)
        {
            printf("Value are not found in array.\n");
        }
        else
        {
            printf("Value are found at index %d\n", pos);
        }
    }
    return 0;
}