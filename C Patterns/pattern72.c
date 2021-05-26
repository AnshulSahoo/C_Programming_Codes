/*
pattern-72
--------------------
 E E E E E
  D D D D
   C C C
    B B
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
        printf("%c ",i+64);
    }
    printf("\n");
  }
  return 0;
}