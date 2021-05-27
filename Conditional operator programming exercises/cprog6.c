/*WAP in C to input any charcter and and check whether 
it is a alphabet, digit or special charcter.*/

#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch;

    printf("Enter the character : ");
    scanf("%c",&ch);

    /*
    if(isalpha(ch))
        printf("Entered character is a alphabet")
    else if(isdigit(ch))
        printf("Entered character is a digit")
    else
        printf("Entered character is a special character")
    */

    (isalpha(ch))?printf("Entered character is a alphabet"):
    ((isdigit(ch))?printf("Entered character is a digit"):
    printf("Entered character is a special character"));


}