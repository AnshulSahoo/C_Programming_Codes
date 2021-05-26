/*
pattern-71
--------------------
 5 4 3 2 1
  4 3 2 1
   3 2 1
    2 1
     1
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
        printf("%d ",k);
    }
    printf("\n");
  }
  return 0;
}