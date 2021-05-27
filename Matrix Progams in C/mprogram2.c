//WAP in C to subtarct one matrix from another

#include<stdio.h>
#define SIZE 3

int main()
{
    int i, j, row, col;
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int subtraction[SIZE][SIZE];

    //Enter number of rows
    printf("Enter the Number of rows : ");
    scanf("%d",&i);

    //Enter number of columns
    printf("Enter the Number of columns : ");
    scanf("%d",&j);

    //Enter first matrix
    printf("Enter the Elements of first matrix of size 3 X 3 : \n");

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    //Enter second matrix
    printf("Enter the Elements of second matrix of size 3 X 3 : \n");

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    //Print first matrix
    printf("Entered first matrix of size 3 X 3 : \n");

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n\n");
    }

    //Print second matrix
    printf("Entered second matrix of size 3 X 3 : \n");

    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("%d\t",B[row][col]);
        }
        printf("\n\n");
    }

    //Subtraction of matrix
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            subtraction[row][col] = A[row][col] - B[row][col];
        }
    }

    //Printing result
    printf("The subtracted of matrix of size 3 X 3 : \n");
    
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("%d\t", subtraction[row][col]);
        }
        printf("\n\n");
    }
    return 0;
}
