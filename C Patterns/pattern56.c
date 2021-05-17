/*
pattern-56
--------------------
5 
4 5
3 4 5
2 3 4 5
1 2 3 4 5
0 1 2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5 
--------------------
*/

#include<stdio.h>
int main(){
    int n,i,j,k;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    //loop for upper pattern 
    for(i=n;i>=0;i--){
        for(j=i;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    //loop for lower pattern 
    for(i=1;i<=n;i++){
        for(k=i;k<=n;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}

