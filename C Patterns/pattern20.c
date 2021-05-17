/*
pattern-20
--------------------
1 2 3 4 5
1 2 3 4 
1 2 3 
1 2 
1 
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the Number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}