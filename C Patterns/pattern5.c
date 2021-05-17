/*
pattern-5
--------------------
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
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
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}