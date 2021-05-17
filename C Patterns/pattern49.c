/*
pattern-49
--------------------
9 9 9 9 9 9 9 9 9
  7 7 7 7 7 7 7 
    5 5 5 5 5 
      3 3 3 
        1
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
            printf("%d ",z);
        }
        z = z-2;
        printf("\n");
    }
    return 0;
}