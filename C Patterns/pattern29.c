/*
pattern-29
--------------------
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

    printf("Enter thr number of rows : ");
    scanf("%d",&n);

    //loop for pattern 
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(k=n;k>=i;k--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}