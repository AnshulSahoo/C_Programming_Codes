//Write a C program to check whether a number is even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("Enter N value  = ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Entered number is even number");
    else
        printf("Entered number is odd number");
    return 0;
}