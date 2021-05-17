/*
pattern-59
--------------------
        * 
      * * 
    * * *
  * * * *
* * * * *
  * * * *
    * * *
      * * 
        * 
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
        for(j=n-1;j>=i;j--){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
    printf("\n");
    }
    //loop for lower pattern
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf("  ");
        }
        for(k=n;k>i;k--){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}