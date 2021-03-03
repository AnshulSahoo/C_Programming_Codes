//Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include<stdio.h>
int main()
{
    float celcius, farenheit;
    printf("Enter the temprature in Celcius : ");
    scanf("%f",&farenheit);

    farenheit = celcius - 32 * 1.8; 

    printf("Temprature in Farenheit = %.2f",farenheit);
    return 0;

}