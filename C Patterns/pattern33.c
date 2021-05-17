/*
pattern-33
--------------------
A B C D E
  A B C D 
    A B C
      A B
        A
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k;

    printf("Enter the Number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(k=n;k>=i;k--){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}