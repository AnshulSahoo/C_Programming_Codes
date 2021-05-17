/*
pattern-46
--------------------
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
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
            printf("%c ",k+64);
        }
        for(m=i-1;m>=1;m--){
            printf("%c ",m+64);
        }
        printf("\n");
    }
    return 0;
}