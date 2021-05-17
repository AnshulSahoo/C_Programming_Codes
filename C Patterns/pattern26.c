/*
pattern-26
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

    printf("Enter the numbers of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}