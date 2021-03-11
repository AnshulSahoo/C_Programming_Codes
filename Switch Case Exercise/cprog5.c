//Write a C program to check whether a number is even or odd using switch case
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);

    switch(num%2==0)
    {
        case 0:
        printf("%d is EVEN ",num);
        break;

        case 1:
        printf("%d is odd",num);
        break;

    }
    return 0;

}