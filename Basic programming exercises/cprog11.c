//Write a C program to find power of any number x ^ y
#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, z;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the exponent : ");
    scanf("%d",&y);
    z=pow(x,y);
    printf("The value of %d^%d=%d",x,y,z);
    return 0;
}