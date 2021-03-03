//WAP in C to enter length and breath and find its area
#include<stdio.h>
int main()
{
    int length, breath, area;
    printf("Enter length : ");
    scanf("%d",&length);
    printf("Enter breath : ");
    scanf("%d",&breath);

    area = length * breath;

    printf("The Area of the rectagle = %d",area);
    return 0;
}