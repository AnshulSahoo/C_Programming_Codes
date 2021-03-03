//Write a C program to perform input/output of all basic data types
#include<stdio.h>
int main()
{
    char charVal;
    unsigned char uCharVal;

    short shortVal;
    unsigned short uShortVal;

    int intVal;
    unsigned int uIntVal;

    long longVal;
    unsigned long uLongVal;

    long long longLongVal;
    unsigned long long uLongLongVal;

    float floatVal;
    double doubleVal;
    long double longDoubleVal;

    printf("Enter a character : ");
    charVal = getchar();
    getchar(); //a dummy getchar to capture enter
    printf("\n");
    printf("Enter a character : ");
    uCharVal = getchar();
    getchar(); //a dummy getchar to capture enter
    printf("\n");
    printf("Enter a signed short value : ");
    scanf("%hi",&shortVal);
    printf("\n");
    printf("Enter a Unsisigned short value : ");
    scanf("%hu",&uShortVal);
    printf("\n");
    printf("Enter a signed int value : ");
    scanf("%d",&intVal);
    printf("\n");
    printf("Enter a Unsisigned int value : ");
    scanf("%u",&uIntVal);
    printf("\n");
    printf("Enter a signed long int value : ");
    scanf("%ld",&longVal);
    printf("\n");
    printf("Enter a Unsisigned long int value : ");
    scanf("%lu",&uLongVal);
    printf("\n");
    printf("Enter a signed long long int value : ");
    scanf("%Ld",&longLongVal);
    printf("\n");
    printf("Enter a Unsisigned long long int value : ");
    scanf("%Lu",&uLongLongVal);
    printf("\n");
    printf("Enter a float value : ");
     scanf("%f",&floatVal);
    printf("\n");
    printf("Enter a double value : ");
    scanf("%lf",&doubleVal);
    printf("\n");
    printf("Enter a long double value : ");
    scanf("%Lf",&longDoubleVal);
    printf("\n");
    printf("Enter a character : %C",charVal);
    printf("\n");
    printf("Enter a character : %C",uCharVal);
    printf("\n");
    printf("Enter a signed short value : %hi",shortVal);
    printf("\n");
    printf("Enter a Unsisigned short value : %hu",uShortVal);
    printf("\n");
    printf("Enter a signed int value : %d",intVal);
    printf("\n");
    printf("Enter a Unsisigned int value : %u",uIntVal);
    printf("\n");
    printf("Enter a signed long int value : %ld",longVal);
    printf("\n");
    printf("Enter a Unsisigned long int value : %lu",uLongVal);
    printf("\n");
    printf("Enter a signed long long int value : %Ld",longLongVal);
    printf("\n");
    printf("Enter a Unsisigned long long int value : %Lu",uLongLongVal);
    printf("\n");
    printf("Enter a float value : %f",floatVal);
    printf("\n");
    printf("Enter a double value : %lf",doubleVal);
    printf("\n");
    printf("Enter a long double value : %Lf",longDoubleVal);
   
    return 0;

}
