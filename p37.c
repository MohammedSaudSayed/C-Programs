#include<stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    int square;
    while (i <= n );
    {
        square = i*i;
        printf("The square is %d \n", square);
        i++;
    }
    return 0;
}