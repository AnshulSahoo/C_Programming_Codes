/*
pattern-34
--------------------
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
--------------------
*/

#include<stdio.h>
int main(){
    int n,i,j,k,m;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        for(m=1;m<i;m++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
