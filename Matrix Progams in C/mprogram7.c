//WAP in C to find the sum of Minor diagonal of a matrix

#include<stdio.h>
#define SIZE 5  
int main()
{
    int i, j; 
    int row, col;
    int firstMatrix[SIZE][SIZE];
    int sum=0;


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

    for(row=0;row<i;row++)
    {
        sum = sum + firstMatrix[row][j-row-1];
    }

    printf("The sum of the Minor diagonal elements of a matrix are = %d",sum);


    return 0;

}