#include<stdio.h>
int main()
{
    int i;
    int cube = 0;
    for (i = 1; i <= 100; i++)
    {
        cube = i*i*i;
        printf("%d \n", cube);
    }
    return 0;
}