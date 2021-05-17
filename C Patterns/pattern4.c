/*
pattern-4
--------------------
A A A A A
B B B B B 
C C C C C 
D D D D D
E E E E E
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}