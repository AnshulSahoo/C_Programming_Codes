//Write a C program to enter two angles of a triangle and find the third angle
#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    printf("Enter First angle = ");
    scanf("%d",&angle1);
    printf("Enter Second angle = ");
    scanf("%d",&angle2);
    //the sum of interior angle of a triangle is 180 degree
    angle3=180-(angle1+angle2);
    printf("The third angle = %d",angle3);
    return 0;
}