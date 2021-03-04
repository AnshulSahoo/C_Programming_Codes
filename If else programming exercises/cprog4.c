//Write a C program to check whether a number is divisible by 5 and 11 or not
#include<stdio.h>
int main()
{
    int n,ndiv5,ndiv11;
    printf("Enter N value  = ");
    scanf("%d",&n);
    ndiv5=(n%5);
    ndiv11=(n%11);
    if(ndiv5==0 && ndiv11==0)
        printf("Entered number is divisible by 5 and 11");
    else if(ndiv5==0)
        printf("Entered number is only divisible by 5");
    else if(ndiv11==0)
        printf("Entered number is only divisible by 11");
    else
        printf("Entered number is not divisible by 5 and 11");
    return 0;
}