//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and English. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F

#include<stdio.h>
int main()
{
    float mark1, mark2, mark3, mark4, mark5, total_marks, percentage;
    printf("Enter mark of subjects:\n");
    printf("Physics=");
    scanf("%f",&mark1);
    printf("Chemistry=");
    scanf("%f",&mark2);
    printf("Biology=");
    scanf("%f",&mark3);
    printf("Mathematics=");
    scanf("%f",&mark4);
    printf("English=");
    scanf("%f",&mark5);

    total_marks=mark1+mark2+mark3+mark4+mark5;
    printf("Total Marks=%.2f\n",total_marks);

    percentage=(total_marks/500)*100;
    printf("Percentage=%.2f\n",percentage);

    if(percentage >= 90)
        printf("Grade A");
    else if(percentage >= 80 && percentage < 90)
        printf("Grade B");
    else if(percentage >= 70 && percentage < 80)
        printf("Grade C");
    else if(percentage >= 60 && percentage < 70)
        printf("Grade D");
    else if(percentage >= 40 && percentage < 60)
        printf("Grade E");
    else
        printf("Grade F");
    return 0;
}