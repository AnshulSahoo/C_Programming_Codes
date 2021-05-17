/*
pattern-57
--------------------
E 
E D
E D C
E D C B
E D C B A
E D C B
E D C
E D
E 
--------------------
*/

#include<stdio.h>
int main(){
    int n,i,j,k;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for upper pattern 
    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--){
            printf("%c ",j+64);
        }
        printf("\n");
    }

    //loop for lower pattern 
    for(i=1;i<n;i++){
        for(j=n;j>i;j--){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}

