//Write a C program to enter P, T, R and calculate Simple Interest
#include<stdio.h>
int main()
{
    float p, t, r, si;
    printf("Enter Principal Amount : ");
    scanf("%f",&p);
    printf("Enter Time : ");
    scanf("%f",&t);
    printf("Enter rate of intrest : ");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("Simple intrest = %.3f",si);
    return 0;
}