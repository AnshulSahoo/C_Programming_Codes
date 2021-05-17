/*
pattern-8
--------------------
E E E E E
D D D D D 
C C C C C 
B B B B B 
A A A A A
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
            printf("%c ",64+i);
        }
        printf("\n");
    }
    return 0;
}