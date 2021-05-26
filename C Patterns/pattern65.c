/*
pattern-65
--------------------
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
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
        printf("%d ",i);
    }
    printf("\n");
  }
  return 0;
}