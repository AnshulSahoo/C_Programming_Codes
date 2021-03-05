//Write a C program to find maximum between two numbers using conditional operator
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    printf("The maximum among two numbers=%d",max);
    return 0;
}