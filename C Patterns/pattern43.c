/*
pattern-43
--------------------
        0 
      1 0 1 
    2 1 0 1 2 
  3 2 1 0 1 2 3
4 3 2 1 0 1 2 3 4
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k,m;

    printf("Enter the number of rows :" );
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf("  ");
        }
        for(k=i-1;k>=0;k--){
            printf("%d ",k);
        }
        for(m=1;m<i;m++){
          printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}