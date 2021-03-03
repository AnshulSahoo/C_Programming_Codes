//Write a C program to convert days into years, weeks and days
#include<stdio.h>
int main()
{
    int ndays, days, weeks, years;
    printf("Enter number of days =");
    scanf("%d",&ndays);

    years=ndays/365;
    weeks=(ndays%365)/7;
    days=ndays-((years*365)+(weeks*7));

    printf("Number of weeks = %d\n",weeks);
    printf("Number of years = %d\n",years);
    printf("Number of days = %d",days);
    return 0;
}