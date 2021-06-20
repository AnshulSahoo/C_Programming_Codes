//C program to find length of a string( without the use of strlen)

#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE];
    int i, count=0;
    printf("\nEnter yout text : ");
    gets(text);

    printf("\n\nYour entered text is : ");
    puts(text);

    //logic to find the no of character in a string that
    for(int i = 0; text[i]!='\0'; i++)
    {
        count++;
    }

    printf("The length of the string is : %d", count);
    printf("\n");
    return 0;
}