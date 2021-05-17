/*
pattern-7
--------------------
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for pattern 
    for (i=n; i>=1; i--){
        for(j=n;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}