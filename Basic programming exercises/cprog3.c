//WAP in c to enter two number and perform all arithmetic operation
#include<stdio.h>
int main()
{
    
    int num1, num2, sum, sub, mul, mod;
    float div;

    // input two numbers
    printf("Enter First Number : ");
    scanf("%d",&num1);
    printf("Enter Second Number : ");
    scanf("%d",&num2);

    //perform all arithmetic operation
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2; 
    div = (float)num1 / num2; //here I have type casted num1
    mod = num1 % num2;

    // print the result of all arithmetic operation
    printf("Submation of two Numbers = %d\n",sum);
    printf("Subtraction of two Numbers = %d\n",sub);
    printf("Multiplication of two Numbers = %d\n",mul);
    printf("Division of two Numbers = %f\n",div);
    printf("Modulus of two Numbers = %d\n",mod);
    return 0;
}