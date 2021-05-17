/*
pattern-55
--------------------
4
4 3
4 3 2 
4 3 2 1
4 3 2 1 0
4 3 2 1 
4 3 2
4 3
4
--------------------
*/

#include<stdio.h>
int main(){
    int n,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for upper pattern
    for(i=n-1;i>=0;i--){
        for(j=n-1;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }

    //loop for lower pattern
    for(i=0;i<=n-1;i++){
        for(j=n-1;j>i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}