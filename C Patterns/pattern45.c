/*
pattern-45
--------------------
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
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
        for(k=1;k<=i;k++){
            printf("%d ",k);
        }
        for(m=i-1;m>=1;m--){
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}