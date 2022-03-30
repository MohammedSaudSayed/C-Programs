#include<stdio.h>
int main()
{
    int i = 10;
    int n;
    printf("Enter a value");
    scanf("%d", &n);
    while (i >= n)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}