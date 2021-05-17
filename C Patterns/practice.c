/*Write a program that can give the sine of a value between 
0 and 1 (non inclusive). */

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float sin_val;
    printf("Enter the N value : ");
    scanf("%d",&n);

    sin_val = sin(n);

    printf("The value of sin(%d) = %f",n,sin_val);
    return 0;

}