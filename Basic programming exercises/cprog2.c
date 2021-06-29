//Write a C program to enter two numbers and find their sum.
#include<stdio.h>
int main()
{
    int num1, num2, sum;

    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Second Number : ");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("The sum of two numbers is %d", sum);
    return 0;
}
