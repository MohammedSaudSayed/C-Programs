#include<stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d \n", i);
        i = i + 2;
    }
    return 0;
}