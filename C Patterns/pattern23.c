/*
pattern-23
--------------------
E D C B A  
E D C B  
E D C  
E D 
E 
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
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}