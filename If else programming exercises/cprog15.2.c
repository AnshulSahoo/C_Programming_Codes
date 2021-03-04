//Write a C program to input all sides of a triangle and check whether triangle is valid or not(Nested If else)
#include<stdio.h>
int main()
{
    int a,b,c,valid;
    printf("Enter the sides\n");
    printf("Enter First Side:");
    scanf("%d",&a);
    printf("Enter Second Side:");
    scanf("%d",&b);
    printf("Enter Third Side:");
    scanf("%d",&c);

    if(a+b>c)
        if(a+c>b)
            if(b+c>a)
                valid=1;
            
    if(valid==1)
        printf("Triangle is Valid");
    else
        printf("Triangle is Invalid");

    return 0;
}