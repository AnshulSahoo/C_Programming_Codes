/*
pattern-60
--------------------
      3
    3 2
  3 2 1
3 2 1 0
  3 2 1
    3 2
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
    for(k=n-1;k>=i;k--)
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
    for(k=n-1;k>=i;k--)
    {
      printf("%d ",k);
    } 
    printf("\n"); 
  }
  return 0;
}