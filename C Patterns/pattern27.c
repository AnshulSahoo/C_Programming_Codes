/*
pattern-27
--------------------
        A
      B B
    C C C 
  D D D D
E E E E E
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
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}