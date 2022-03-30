#include<stdio.h>
int main()
{
    int i;
    int square;
    for (i = 1; i <= 100; i++)
    {
        square = i*i;
        printf("%d \n", square);
    }
    return 0;
}