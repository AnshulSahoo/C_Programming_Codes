/*
pattern-18
--------------------
A A A A A 
B B B B 
C C C
D D 
E
--------------------
*/

#include<stdio.h>
int main(){
    int n,i,j;

    printf("Enter thr number of rows : ");
    scanf("%d",&n);

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}