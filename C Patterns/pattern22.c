/*
pattern-22
--------------------
E E E E E
D D D D
C C C
B B
A  
--------------------
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the numbers of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}