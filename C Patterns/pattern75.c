/*
pattern-75
--------------------
    *
   * *
  * * *
 * * * * 
* * * * * 
 * * * *
  * * *
   * *
    *
--------------------
*/

#include<stdio.h>
int main()
{
  int n,i,j,k;
  printf("Enter the number of rows : ");
  scanf("%d",&n);

  //upper loop
  for(i=1;i<=n;i++)
  {
    for(j=n;j>i;j--)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("* ");
    }
    printf("\n");
  }

  //lower loop
  for(i=n-1;i>=1;i--)
  {
    for(j=1;j<(n+1-i);j++)
    {
        printf(" ");
    }
    for(k=i;k>=1;k--)
    {
        printf("* ");
    }
    printf("\n");
  }
  return 0;
}