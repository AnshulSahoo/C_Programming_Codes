/*
pattern-73
--------------------
 E D C B A
  D C B A
   C B A
    B A
     A
--------------------
*/
                                                                   
#include<stdio.h>
int main()
{
  int n,i,j,k;
  printf("Enter the number of rows : ");
  scanf("%d",&n);

  //upper loop
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=(n+1-i);j++)
    {
        printf(" ");
    }
    for(k=i;k>=1;k--)
    {
        printf("%c ",k+64);
    }
    printf("\n");
  }
  return 0;
}