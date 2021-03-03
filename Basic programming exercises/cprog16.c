//Write a C program to enter marks of five subjects and calculate total, average and percentage
#include<stdio.h>
int main()
{
    float marks, percentage, a, b, c, d, e, total, average;
    printf("Enter the marks of Subject 1 : ");
    scanf("%f",&a);
    printf("Enter the marks of Subject 2 : ");
    scanf("%f",&b);
    printf("Enter the marks of Subject 3 : ");
    scanf("%f",&c);
    printf("Enter the marks of Subject 4 : ");
    scanf("%f",&d);
    printf("Enter the marks of Subject 5 : ");
    scanf("%f",&e);
    total=a+b+c+d+e;
    printf("Total marks = %.3f\n",total);
    average=total/5;
    printf("Average mark : %.3f\n",average);
    percentage=(total/500)*100;
    printf("Percentage = %.3f\n",percentage);
    return 0;
}