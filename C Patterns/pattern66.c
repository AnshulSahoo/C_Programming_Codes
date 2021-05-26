/*
pattern-66
--------------------
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
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
        printf("%d ",k);
    }
    printf("\n");
  }
  return 0;
}