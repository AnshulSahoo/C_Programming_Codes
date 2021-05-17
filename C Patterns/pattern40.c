/*
pattern-40
--------------------
        1
      3 2 1
    5 4 3 2 1
  7 6 5 4 3 2 1
9 8 7 6 5 4 3 2 1
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k,m=1;

    printf("Enter the number of rows :" );
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf("  ");
        }
        for(k=(i*2)-1;k>=1;k--){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}