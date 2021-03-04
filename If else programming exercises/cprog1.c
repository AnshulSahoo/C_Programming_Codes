//Write a C program to find maximum between two numbers
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three number: \n");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("%d is greater",a);
    else
        printf("%d is greater",b);
    return 0;
}