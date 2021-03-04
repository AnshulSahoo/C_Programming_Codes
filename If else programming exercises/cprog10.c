//Write a C program to check whether a character is uppercase or lowercase alphabet
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    
    if(isalpha(ch))
        if(isupper(ch))
            printf("The Entered charcter is upper case alphabet");
        else 
            printf("The Entered charcter is lower case alphabet");
    else
        printf("The entered character is not an alphabet");
    return 0;
}
