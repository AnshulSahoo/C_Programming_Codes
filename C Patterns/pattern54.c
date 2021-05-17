/*
pattern-54
--------------------
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
--------------------
*/

#include<stdio.h>
int main(){
    int n,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for upper pattern
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    //loop for lower pattern
    for(i=n;i>=1;i--){
        for(j=1;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}