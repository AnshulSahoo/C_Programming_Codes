//WAP in C to find the sum of entered array

#include<stdio.h>

int main()
{
    int arr[100];
    int arrSize,i,sum=0;

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
        sum =  sum + arr[i];
    }

    printf("The sum of the elements in array : %d",sum);

    return 0;

}
