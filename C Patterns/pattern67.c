/*
pattern-67
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
        printf("%c ",i+64);
    }
    printf("\n");
  }
  return 0;
}