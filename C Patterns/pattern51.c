/*
pattern-51
--------------------
E E E E E E E E E
  D D D D D D D
    C C C C C
      B B B
        A
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k,m,z;

    printf("Enter the number of rows : ");
    scanf("%d",&n);
    z=n*2-1;
    //loop for pattern 
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--){
            printf("  ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}