//Write a C program print total number of days in a month using switch case.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter Month Number: ");
    scanf("%d",&month);
    switch (month)
    {
        case 1:
        printf("JANUARY-31 DAYS\n");
        break;

        case 2:
        printf("FEBRUARY-28/29 DAYS\n");
        break;

        case 3:
        printf("MARCH-31 DAYS\n");
        break;

        case 4:
        printf("APRIL-30 DAYS\n");
        break;

        case 5:
        printf("MAY-31 DAYS\n");
        break;
        
        case 6:
        printf("JUNE-30 DAYS\n");
        break;

        case 7:
        printf("JULY-31 DAYS\n");
        break;

        case 8:
        printf("AUGUST-31 DAYS\n");
        break;

        case 9:
        printf("SEPTEMBER-30 DAYS\n");
        break;

        case 10:
        printf("OCTOBER-31 DAYS\n");
        break;

        case 11:
        printf("NOVEMBER-30 DAYS\n");
        break;

        case 12:
        printf("DECEMBER-31 DAYS\n");
        break;

        default:
        printf("INVALID ENTRY\n");
        break;
    }
    return 0;
}