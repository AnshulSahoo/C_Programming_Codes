/*
pattern-38
--------------------
        A 
      C C C
    E E E E E 
  F F F F F F F 
I I I I I I I I I 
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
        for(k=1;k<=m;k++){
            printf("%c ",m+64);
        }
        m=m+2;
        printf("\n");
    }
    return 0;
}