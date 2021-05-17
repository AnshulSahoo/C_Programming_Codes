/*
pattern-13
--------------------
A
B B
C C C 
D D D D 
E E E E E
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
            printf("%c ",64+i);
        }
        printf("\n");
    }
    return 0;
}