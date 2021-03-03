// Write a C program to enter any number and calculate its square root
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float squareRoot;
    printf("Enter n value = ");
    scanf("%d",&n);
    squareRoot=sqrt(n);
    printf("The sqaureroot of n = %.2f",squareRoot);
    return 0;
}