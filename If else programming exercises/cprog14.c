//Write a C program to input angles of a triangle and check whether triangle is valid or not
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter three angles of a Triangle");
    printf("Angle A:");
    scanf("%d",&a);
    printf("Angle B:");
    scanf("%d",&b);
    printf("Angle C:");
    scanf("%d",&c);

    sum=a+b+c;

    if(sum==180)
        printf("Entered angles are valiad for triangle");
    else
        printf("Entered angles are invaliad for triangle");
    return 0;
}