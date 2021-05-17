/*
pattern-3
--------------------
1 2 3 4 5
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}