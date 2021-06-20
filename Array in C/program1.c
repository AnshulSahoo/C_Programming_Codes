//WAP in C to to read and print elements of array.

#include<stdio.h>

int main()
{
    int arr[100],arrSize,i;

    printf("Enter the size of array : ");
    scanf("%d",&arrSize);

    //enter the array
    printf("\nEnter the number of array : \n");
    for(i=0;i<arrSize;i++)
    {
        scanf("%d",&arr[i]);
    }

    //print the array
    printf("\nThe stored elements in the array are : \n");
    for(i=0;i<arrSize;i++)
    {
        printf("Element[%d] = %d\n",i,arr[i]);
    }

    return 0;

}
