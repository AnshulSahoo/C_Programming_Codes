/*
pattern-37
--------------------
        A 
      B B B
    C C C C C 
  D D D D D D D 
E E E E E E E E E
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
        for(k=1;k<i*2;k++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}