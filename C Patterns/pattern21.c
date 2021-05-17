/*
pattern-21
--------------------
5 4 3 2 1 
5 4 3 2  
5 4 3  
5 4  
5 
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the numbers of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}