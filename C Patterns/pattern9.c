/*
pattern-9
--------------------
E D C B A
E D C B A 
E D C B A 
E D C B A
E D C B A
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
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}