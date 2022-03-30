#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("\n 1st number is greater than 2nd & 3rd", a);
        }
        else 
        {
            printf("\n 3rd number is greater than 1st & 2nd", c);
        }
    }
        else 
        {
        if (b > c)
        {
            printf("\n 2nd number is greater than 1st & 3rd", b);
        }
        else
        {
            printf("\n 3rd number is greater than 1st & 2nd", c);
        }
    }
    return 0;
}
        