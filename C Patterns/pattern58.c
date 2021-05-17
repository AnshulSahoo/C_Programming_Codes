/*
pattern-58
--------------------
D
C D
B C D
A B C D
B C D
C D
D 
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for upper pattern
    for(i=n;i>=1;i--){
        for(j=i;j<=n;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }

    //loop for lower pattern
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}
