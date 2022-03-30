#include<stdio.h>
int main()
{
    int i = 1;
    int square;
    while (i <= 10)
    {
        square = i * i;
        printf("%d \t %d \n", i, square);
        i++;
    }
    return 0;
}

    