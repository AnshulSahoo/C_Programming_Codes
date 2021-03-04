//Write a C program to input month number and print number of days in that month.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter Month number(1-12):");
    scanf("%d",&month);
    if(month==1)
        printf("JANUARY:31 DAYS");
    else if(month==2)
        printf("FEBRUARY:28/29 DAYS");
    else if(month==3)
        printf("MARCH:31 DAYS");
    else if(month==4)
        printf("APRIL:30 DAYS");
    else if(month==5)
        printf("MAY:31 DAYS");
    else if(month==6)
        printf("JUNE:30 DAYS");
    else if(month==7)
        printf("JULY:31 DAYS");
    else if(month==8)
        printf("AUGUST:31 DAYS");
    else if(month==9)
        printf("SEPTEMBER:30 DAYS");
    else if(month==10)
        printf("OCTOBER:31 DAYS");
    else if(month==11)
        printf("NOVEMBER:30 DAYS");
    else if(month==12)
        printf("DECEMBER:31 DAYS");
    else
        printf("Invalid Input");
    return 0;
}