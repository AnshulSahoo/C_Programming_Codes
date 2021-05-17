/*
pattern-15
--------------------
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

    //loop for pattern
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}