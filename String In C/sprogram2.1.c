//C program to copy one string to another string(with the use of strcpy)

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main()
{
	char text1[MAX_SIZE];
	char text2[MAX_SIZE];

	printf("Enter the first string : ");
	gets(text1);

	strcpy(text2, text1);

	printf("The first String : ");
	puts(text1);
	printf("The second String : ");
	puts(text2);

	return 0;
}