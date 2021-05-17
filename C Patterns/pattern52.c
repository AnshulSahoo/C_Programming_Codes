/*
pattern-52
--------------------
I I I I I I I I I 
  G G G G G G G
    E E E E E
      C C C
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
        for(k=1;k<=z;k++){
            printf("%c ",z+64);
        }
        z = z-2;
        printf("\n");
    }
    return 0;
}