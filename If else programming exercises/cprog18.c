//Write a C program to calculate profit or loss
#include<stdio.h>
int main()
{
    float amount, selling_price;
    printf("Enter Total price of item:");
    scanf("%f",&amount);

    printf("Enter Total price of item:");
    scanf("%f",&selling_price);

    if(selling_price>amount)
        printf("PROFIT");
    else if(selling_price<amount)
        printf("LOSS");
    else    
        printf("NO PROFIT NO LOSS");
    return 0;

}