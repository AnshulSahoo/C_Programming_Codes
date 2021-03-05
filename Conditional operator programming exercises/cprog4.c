//Write a C program to check whether year is leap year or not using conditional operator
#include <stdio.h>
int main()
{
    int year;

    printf("Enter any year: ");
    scanf("%d", &year);

    (year%4==0 && year%100!=0) ? printf("LEAP YEAR") :
        (year%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");

    return 0;
}