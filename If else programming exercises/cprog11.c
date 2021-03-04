//Write a C program to input week number and print week day
#include<stdio.h>
int main()
{
    int day;
    printf("Enter Number of days(1-7) :");
    scanf("%d",&day);
    if(day==1)
        printf("MONDAY");
    else if(day==2)
        printf("TUESDAY");
    else if(day==3)
        printf("WEDNESDAY");
    else if(day==4)
        printf("THURSDAY");
    else if(day==5)
        printf("FRIDAY");
    else if(day==6)
        printf("SATURDAY");
    else if(day==7)
        printf("SUNDAY");
    else
        printf("Wrong Input");
    return 0;
}
