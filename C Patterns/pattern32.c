/*
pattern-32
--------------------
E E E E E
  D D D D 
    C C C 
      B B 
        A   
--------------------
*/


#include<stdio.h>
int main()
{
    int n,i,j,k;

    printf("Enter thr number of rows : ");
    scanf("%d",&n);

    //loop for pattern 
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}