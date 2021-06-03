//WAP in C to check whether two matrixes are equal or not.

#include<stdio.h>
#define SIZE 5  
int main()
{
    int i, j; 
    int row, col;
    int firstMatrix[SIZE][SIZE];
    int secondMatrix[SIZE][SIZE];
    int isEqual;


    //Enter number of rows
    printf("\nEnter the Number of rows : ");
    scanf("%d",&i);

    //Enter number of columns
    printf("\nEnter the Number of columns : ");
    scanf("%d",&j);

    //Enter first matrix
    printf("\nEnter the Elements of first matrix of size %d X %d : \n",i,j);

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            scanf("%d", &firstMatrix[row][col]);
        }
    }

    //Enter second matrix
    printf("\nEnter the Elements of second matrix of size %d X %d : \n",i,j);

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            scanf("%d", &secondMatrix[row][col]);
        }
    }

    //Print first matrix
    printf("\nEntered first matrix of size %d X %d : \n",i,j);

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("%d\t",firstMatrix[row][col]);
        }
        printf("\n\n");
    }

    //Print second matrix
    printf("\nEntered second matrix of size %d X %d : \n",i,j);

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("%d\t",secondMatrix[row][col]);
        }
        printf("\n\n");
    }

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            if(firstMatrix[row][col]==secondMatrix[row][col])
            {
                isEqual=1;
            }
        }
    }

    if(isEqual==1)
    {
        printf("Entered Matrix is equal\n");
    }
    else
    {
        printf("Entered Matrix is not equal\n");
    }

    return 0;

}