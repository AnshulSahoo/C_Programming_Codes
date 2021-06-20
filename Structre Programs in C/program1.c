//WAP in C using structe to show the specifications of a car 
#include<stdio.h>
#define MAX_SIZE 100
struct vehicle
{
    int wheels;
    char vehicleName[MAX_SIZE];
    char colour[MAX_SIZE];
} 
v1 = {4, "Maruti 800", "White"};

void printline()
{
    printf("--------------------------------------\n");
}

int main()
{
    printline();
    printf("Details of Vehicle 1:\n");
    printline();
    printf("No. of wheels in vehicle : %d\n",v1.wheels);
    printf("Vehicle Name : %s\n",v1.vehicleName);
    printf("Colour of the vehicle : %s\n",v1.colour);
    printline();
    printf("\n\n");
    return 0;
}