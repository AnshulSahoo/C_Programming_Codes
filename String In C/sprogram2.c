//C program to copy one string to another string(without the use of strcpy)

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	char text1[MAX_SIZE];
	char text2[MAX_SIZE];
	int i;

	printf("Enter the first string : ");
	gets(text1);

	for(i=0; text1[i]!='\0'; i++)
	{
		text2[i] = text1[i];
	}
	text2[i]='\0';

	printf("The first String : ");
	puts(text1);
	printf("The second String : ");
	puts(text2);

	return 0;
}