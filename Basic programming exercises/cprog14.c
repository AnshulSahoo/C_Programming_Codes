//Write a C program to enter base and height of a triangle and find its area
#include<stdio.h>
int main()
{
    int base, height;
    float area;
    printf("Enter the base of a triangle = ");
    scanf("%d",&base);
    printf("Enter the height of a triangle = ");
    scanf("%d",&height);
    area=0.5*base*height;
    printf("The area of the triangle = %.2f sq meter",area);
    return 0;
}