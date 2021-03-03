//Write a C program to enter length in centimeter and convert it into meter and kilometer
#include<stdio.h>
int main()
{
    float m,km,cm;
    printf("Enter the length in Centimeter : ");
    scanf("%f",&cm);

    m=cm/100;
    km=cm/100000;

    printf("Entered length in meter : %.2f m\n",m);
    printf("Entered length in kilometer : %f km\n",km);
    return 0;

}