//Write a C program to input any alphabet and check whether it is vowel or consonant
 
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    
    if(isalpha(ch))
        printf("The Entered charcter is alphabet");
    else if(isdigit(ch))
        printf("The Entered charcter is digit");
    else 
        printf("The Entered charcter is a special character");
    return 0;
}