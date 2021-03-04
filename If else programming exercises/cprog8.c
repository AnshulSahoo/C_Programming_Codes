//Write a C program to input any alphabet and check whether it is vowel or consonant
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);

    if(isalpha(ch))
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("Entered character is a vowel");
        else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            printf("Entered character is a vowel");
        else
            printf("Entered character is a consonant");
    else
        printf("Entered character is not a alphabet");
    return 0;
}