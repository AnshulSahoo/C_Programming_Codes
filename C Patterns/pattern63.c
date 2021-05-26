/*
pattern-63
--------------------
      D
    D C
  D C B
D C B A
  D C B
    D C
      D 
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
      printf("%c ",k+65);
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
      printf("%c ",k+65);
    } 
    printf("\n"); 
  }
  return 0;
}