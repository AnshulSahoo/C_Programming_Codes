//C program to concatenate two strings(without the use of string library)

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	char text1[MAX_SIZE];
	char text2[MAX_SIZE];
	int i,j;

	printf("Enter the first string : ");
	gets(text1);

	printf("Enter the second string : ");
	gets(text2);

	for(i=0; text1[i]!='\0'; i++)
	{
		text1[i];
	}

	for(j=0; text2[j]!='\0'; i++ && j++)
	{
		text1[i] = text2[j];
	}

	text1[i]='\0';

	printf("The concatenated string : ");
	puts(text1);
	return 0;
}