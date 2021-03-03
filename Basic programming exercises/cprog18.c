//Write a C program to enter P, T, R and calculate Compound Interest
#include<stdio.h>
#include<math.h>
int main()
{
    float p, t, r, cd;
    printf("Enter Principal Amount : ");
    scanf("%f",&p);
    printf("Enter Time : ");
    scanf("%f",&t);
    printf("Enter rate of intrest : ");
    scanf("%f",&r);
    cd=p*pow(1+(r/100),t);
    printf("Compund intrest = %.3f",cd);
    return 0;
}