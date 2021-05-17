/*
pattern-16
--------------------
1 1 1 1 1
2 2 2 2 
3 3 3 
4 4 
5 
--------------------
*/

#include<stdio.h>
int main(){
    int n,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}