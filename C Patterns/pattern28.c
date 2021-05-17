/*
pattern-28
--------------------
        A
      A B
    A B C
  A B C D
A B C D E
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
            printf("%c ",k+64);
        }
        printf("\n");
    }
    return 0;
}
