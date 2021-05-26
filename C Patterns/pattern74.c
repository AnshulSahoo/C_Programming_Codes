/*
pattern-74
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
    int n,i,j,k;

    printf("Enter the Number of rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=(n+1-i);j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {   
            printf("%c ",k+64);
        }
        printf("\n");
    }
    return 0;
}