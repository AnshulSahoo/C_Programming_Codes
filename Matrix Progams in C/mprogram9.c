//C program to interchange diagonals of a matrix

#include<stdio.h>
#define SIZE 5  
int main()
{
    int i, j; 
    int row, col, temp;
    int firstMatrix[SIZE][SIZE];


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

    //diagonal interchanges

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            row=col;
            temp = firstMatrix[row][col];
            firstMatrix[row][col] = firstMatrix[row][(j-col)-1];
            firstMatrix[row][(j-col)-1] = temp;  
        }
    
    }

    printf("\nInterchanged Diaginal matrix of size %d X %d : \n",i,j);

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("%d\t",firstMatrix[row][col]);
        }
        printf("\n\n");
    }
    

    return 0;

}
