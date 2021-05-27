/*Write a C program to input all sides of a triangle and check whether triangle is 
valid or not*/

#include<stdio.h>
int main()
{
    int a,b,c;

    //enter first side
    printf("Enter the first side of a triangle : ");
    scanf("%d",&a);

    //enter second side
    printf("Enter the second side of a triangle : ");
    scanf("%d",&b);

    //enter third side
    printf("Enter the third side of a triangle : ");
    scanf("%d",&c);
    
    /*
    if(b+c>a)
        if(a+c>b)
            if(a+c>b)
                printf("Triangle is valid : ");
            else    
                printf("Triangle is not valid : ");
        else
            printf("Triangle is not valid : ");
    else
        printf("Triangle is not valid : ");
    */

    (b+c>a)?((a+c>b)?((a+c>b)?
    printf("Triangle is valid : "):
    printf("Triangle is not valid")):
    printf("Triangle is not valid")):
    printf("Triangle is not valid");

}