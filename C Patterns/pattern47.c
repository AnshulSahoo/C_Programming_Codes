/*
pattern-47
--------------------
* * * * * * * * *
  * * * * * * * 
    * * * * *
      * * * 
        *  
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k,m;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf("  ");
        }
        for(k=n;k>=i;k--){
            printf("* ",k);
        }
        for(m=n;m>i;m--){
          printf("* ",m);
        }
        printf("\n");
    }
    return 0;   
}