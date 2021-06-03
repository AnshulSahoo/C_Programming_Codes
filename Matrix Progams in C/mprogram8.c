//WAP in C to find the sum of Minor diagonal of a matrix

#include<stdio.h>
#define SIZE 5  
int main()
{
    int i, j; 
    int row, col;
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

    //sum of rows
    for(row=0;row<i;row++)
    {
        int sum=0;
        for(col=0;col<j;col++)
        {
            sum = sum + firstMatrix[row][col];
        }
        printf("The sum of the %d row = %d\n",row+1,sum);
    }

    //sum of column
    for(row=0;row<i;row++)
    {
        int sum=0;
        for(col=0;col<j;col++)
        {
            sum = sum + firstMatrix[col][row];
        }
        printf("The sum of the %d col = %d\n",col+1,sum);
    }
    

    return 0;

}