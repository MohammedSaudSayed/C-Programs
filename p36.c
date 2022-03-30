#include<stdio.h>
int main()
{
    int i;
    int n;
    int square = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        square = i*i;
        printf("The square is %d \n", square);
    }
    return 0;
}