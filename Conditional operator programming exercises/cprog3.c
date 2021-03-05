//Write a C program to check whether a number is even or odd using conditional operator
#include<stdio.h>
int main()
{
    int n,num;
    printf("Enter number : ");
    scanf("%d",&n);
    num=(n%2==0)?printf("Entered Number is EVEN"):printf("Entered Number is ODD");
    return 0;

}