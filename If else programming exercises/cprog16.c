//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides\n");
    printf("Enter First Side:");
    scanf("%d",&a);
    printf("Enter Second Side:");
    scanf("%d",&b);
    printf("Enter Third Side:");
    scanf("%d",&c);

    if(a==b && b==c)
        printf("It is an Equilateral triangle");
    else if(a==b || a==c || b==c)
        printf("It is an Isoscales triangle"); 
    else
        printf("It is an Scalene triangle");
    return 0;
}
