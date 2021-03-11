//Write a C program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);

    switch(num>0)
    {
        case 0:
        printf("%d is POSITIVE ",num);
        break;

        switch (num<0)
        {
            case 0:
            printf("%d is NEGATIVE ",num);
            break;
        
            case 1:
            printf("%d is ZERO ",num);
            break;
        }

        break;

    }
    return 0;

}