//C program to find length of a string( with the use of strlen)

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE];
    printf("\nEnter yout text : ");
    gets(text);

    printf("\n\nYour entered text is : ");
    puts(text);

    printf("The length of the string is : %d\n", strlen(text));

    return 0;
}
