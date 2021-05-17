/*
pattern-42
--------------------
        A
      C B A
    E D C B A
  G F E D C B A
I H G F E D C B A
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
            printf("%c ",k+64);
        }
        printf("\n");
    }
    return 0;
}