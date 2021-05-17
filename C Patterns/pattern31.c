/*
pattern-31
--------------------
1 2 3 4 5
  1 2 3 4 
    1 2 3
      1 2
        1
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k;

    printf("Enter thr number of rows : ");
    scanf("%d",&n);

    //loop for pattern 
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}

