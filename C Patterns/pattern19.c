/*
pattern-19
--------------------
A B C D E 
A B C D
A B C
A B
A
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}