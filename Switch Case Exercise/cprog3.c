//Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main()
{
    char character;
    printf("Enter Month Number: ");
    scanf("%c",&character);
    switch (character)
    {
        case 'a':
        printf("IT IS A VOWEL\n");
        break;

        case 'e':
        printf("IT IS A VOWEL\n");
        break;

        case 'i':
        printf("IT IS A VOWEL\n");
        break;

        case 'o':
        printf("IT IS A VOWEL\n");
        break;

        case 'u':
        printf("IT IS A VOWEL\n");
        break;

        default:
        printf("IT IS CONSONANT\n");
        break;
    }
    return 0;
}