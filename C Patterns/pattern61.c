/*
pattern-61
--------------------
      3
    2 3
  1 2 3
0 1 2 3
  1 2 3
    2 3
      3 
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //upper loop
    for(i=n-1;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(k=i;k<=n-1;k++)
        {
            printf("%d ",k);
        }
    printf("\n");
  }

    //lower loop
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(k=i;k<=n-1;k++)
        {
            printf("%d ",k);
        } 
    printf("\n"); 
  }
  return 0;
}