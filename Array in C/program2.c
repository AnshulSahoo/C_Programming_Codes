//WAP in C to printf entered even elements

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
    printf("\nThe stored even elements in the array are : \n");
    for(i=0;i<arrSize;i++)
    {
        if(arr[i]%2==0)
            printf("Element[%d] = %d\n",i,arr[i]);
    }

    return 0;

}
