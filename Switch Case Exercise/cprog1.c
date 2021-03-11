//Write a C program to print day of week name using switch case.
#include<stdio.h>
int main()
{
    int day;
    printf("Enter Day Number: ");
    scanf("%d",&day);
    switch (day)
    {
        case 1:
        printf("MONDAY\n");
        break;

        case 2:
        printf("TUESDAY\n");
        break;

        case 3:
        printf("WEDNESDAY\n");
        break;

        case 4:
        printf("THURSDAY\n");
        break;

        case 5:
        printf("FRIDAY\n");
        break;
        
        case 6:
        printf("SATURDAY\n");
        break;

        case 7:
        printf("SUNDAY\n");
        break;

        default:
        printf("INVALID ENTRY\n");
        break;
    }
    return 0;
}