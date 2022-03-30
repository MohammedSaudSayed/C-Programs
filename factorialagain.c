#include<stdio.h>
int main()
{
    int i;
    int factorial = 1;
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    printf("The factorial is: %d", factorial);
    return 0;
}