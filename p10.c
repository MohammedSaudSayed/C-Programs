#include<stdio.h>
int main()
{
    int i;
    int n;
    printf("Enter 1st number: ");
    scanf("%d", &i);
    printf("Enter 2nd number: ");
    scanf("%d", &n);
    if (i > n)
    {
        printf("Number 1 is greater then 2");
    }
    else
    {
        printf("Number 2 is greater than 1");
    }
    return 0;
}