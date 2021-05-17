/*
pattern-44
--------------------
        A
      B A B
    C B A B C
  D C B A B C D
E D C B A B C D E
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
            printf("%c ",k+65);
        }
        for(m=1;m<i;m++){
          printf("%c ",m+65);
        }
        printf("\n");
    }
    return 0;
}