//Write a C program to check whether a year is leap year or not(if else nested)
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    if(year%4==0)
        printf("Entered number is a leap year");
        if(year%400==0)
            printf("Entered number is a leap year");
            if(year%100==0)
                printf("Entered number is not a leap year");
    else
        printf("Entered number is not a leap year");
    return 0;
}
