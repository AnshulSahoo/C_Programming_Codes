/*
pattern-1
--------------------
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
--------------------
*/
#include<stdio.h>
int main()
{
  int n,i,j,k;

  printf("Enter the number of rows  : ");
  scanf("%d",&n);

  //loop for pattern 
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}