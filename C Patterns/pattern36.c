/*
pattern-36
--------------------
        1 
      3 3 3
    5 5 5 5 5  
  7 7 7 7 7 7 7
9 9 9 9 9 9 9 9 9
--------------------
*/

#include<stdio.h>
int main()
{
    int i,j,k,m=1,n;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf("  ");
        }
        for(k=1;k<=m;k++){
            printf("%d ",m);
        }
         m=m+2;
        printf("\n");
    }
    return 0;
}