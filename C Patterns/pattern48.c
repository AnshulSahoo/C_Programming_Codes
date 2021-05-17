/*
pattern-48
--------------------
5 5 5 5 5 5 5 5 5
  4 4 4 4 4 4 4 
    3 3 3 3 3 
      2 2 2 
        1
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j,k,m;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",i);
        }
        for(m=1;m<i;m++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;   
}