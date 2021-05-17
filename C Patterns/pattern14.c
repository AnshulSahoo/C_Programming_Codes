/*
pattern-14
--------------------
A 
A B 
A B C 
A B C D
A B C D E
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the Numer of rows : ");
    scanf("%d",&n);

    //loop for pattern 
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}