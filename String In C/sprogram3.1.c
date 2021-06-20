//C program to concatenate two strings(with the use of string library)

#include<stdio.h>
#include<string.h>

#define MAX_SIZE 100
int main()
{
	char text1[MAX_SIZE];
	char text2[MAX_SIZE];
    char text;
	int i,j;

	printf("Enter the first string : ");
	gets(text1);

	printf("Enter the second string : ");
	gets(text2);

	strcat(text1, text2);


	printf("The concatenated string : ");
	puts(text1);
	return 0;
}