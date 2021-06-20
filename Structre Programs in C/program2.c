//WAP in C to enter the details of a car

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

struct vehicle_details
{
    char car_name[MAX_SIZE];
    char company_name[MAX_SIZE];
    int engine;
    int seating_cap;
    float car_price;
}
v1;

void printline()
{
    printf("----------------------------------------------------\n");
}

int main()
{
    printf("Enter the details of a car :\n");
    printf("Enter car name : ");
    gets(v1.car_name);
    printf("Enter company name : ");
    gets(v1.company_name);
    printf("Enter engine cc : ");
    scanf("%d",&v1.engine);
    printf("Enter price of car : ");
    scanf("%d",&v1.seating_cap);
    printf("Enter engine cc : ");
    scanf("%f",&v1.car_price);
    printf("\n\n");
    printline();
    printf("Details of a car :\n");
    printline();
    printf("Car name : %s\n",v1.car_name);
    printf("Enter company name : %s\n",v1.company_name);
    printf("Enter engine cc : %d\n",&v1.engine);
    printf("Enter price of car : %d\n",&v1.seating_cap);
    printf("Enter engine cc : %.2f\n",&v1.car_price);
    printline();
    return 0;
}