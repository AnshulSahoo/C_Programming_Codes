//Write a C program to check whether a number is negative, positive or zero

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number n : ");
    scanf("%d",&n);
    if(n>0)
        printf("Entered number is positive");
    else if(n>0)
        printf("Entered number is negative");
    else
        printf("Entered number is zero");
    return 0;
}