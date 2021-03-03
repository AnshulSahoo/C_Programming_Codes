//Write a C program to enter radius of a circle and find its diameter, circumference and area
#include<stdio.h>
#define PI 3.14
int main()

{
    int r, dia;
    float peri, area;
    printf("Enter the radius of the circle = ");
    scanf("%d",&r);

    dia = r*2;
    peri = 2*PI*r;
    area = PI*r*r;

    printf("Diameter of the circle = %d\n",dia);
    printf("Circumference of the circle = %.2f\n",peri);
    printf("Area of the circle = %.2f",area);
    return 0;
}