//Write a C program to enter length and breadth of a rectangle and find its perimeter
#include<stdio.h>
int main()
{
    int length, breath, perimeter;
    printf("Enter Length : ");
    scanf("%d",&length);
    printf("Enter Breath : ");
    scanf("%d",&breath);

    perimeter = 2*(length+breath);

    printf("The perimeter of rectangle : %d",perimeter);
    return 0;
}