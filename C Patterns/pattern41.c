/*
pattern-41
--------------------
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I
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
        for(k=1;k<i*2;k++){
            printf("%c ",k+64);
        }
        printf("\n");
    }
    return 0;
}