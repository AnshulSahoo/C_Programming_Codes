/*
pattern-6
--------------------
5 5 5 5 5 
4 4 4 4 4 
3 3 3 3 3 
2 2 2 2 2
1 1 1 1 1 
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
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}