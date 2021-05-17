/*
pattern-50
--------------------
1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7 
    1 2 3 4 5 
      1 2 3 
        1
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k,m,z;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for pattern 
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--){
            printf("  ");
        }
        for(k=1;k<i*2;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}