//WAP in C to multiply two matrix

#include<stdio.h>
#define SIZE 5

int main()
{
    int i, j; 
    int row, col;
    int firstMatrix[SIZE][SIZE];
    int mulMatrix[SIZE][SIZE];
    int num;

    printf("Enter Number : ");
    scanf("%d",&num);

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

    //Multiplication of matrix
    mulMatrix[i][j]=0;
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            mulMatrix[row][col] = mulMatrix[row][col] + num * firstMatrix[row][col];
        }
    }

    //Printing result
    printf("\nThe sum of matrix of size %d X %d : \n",i,j);
    
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("%d\t", mulMatrix[row][col]);
        }
        printf("\n\n");
    }
    return 0;
}