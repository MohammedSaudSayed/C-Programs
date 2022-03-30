#include<stdio.h>
int main()
{
    int i;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 75; i >= n; i--)
    {
        printf("%d \n", i);
    }
    return 0;
}