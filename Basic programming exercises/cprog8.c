//Write a C program to enter temperature in Celsius and convert it into Fahrenheit
#include<stdio.h>
int main()
{
    float celcius, farenheit;
    printf("Enter the temprature in Celcius : ");
    scanf("%f",&celcius);

    farenheit = (1.8*celcius) + 32;

    printf("Temprature in Farenheit = %.2f",farenheit);
    return 0;

}