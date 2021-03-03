//Write a C program to calculate area of an equilateral triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float side, area;
    printf("Enter the side of an equilateral angle : ");
    scanf("%f",&side);
    //calculate the area of an equlateral triangle
    area = (sqrt(3)/4)*(side*side);
    printf("Area of equilateral angle = %.2f",area);
    return 0;
}