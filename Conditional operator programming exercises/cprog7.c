/*Write a C program to convert a uppercase char to lowercase and a lowercase char 
to uppercase*/

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

    (isupper(ch))?printf("The character in lower case %c",ch+32):
    ((islower(ch))?printf("The character in upper case %c",ch-32):
    printf("Entered character is not a alphabet"));


}