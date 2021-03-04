//Write a C program to check whether a character is alphabet or not
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    if(isalpha(ch))
        printf("Entered character is a alphabet");
    else
        printf("Entered character is not a alphabet");
    return 0;

}