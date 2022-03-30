#include<stdio.h>
int main()
{
    int i = 1;
    int cube;
    while (i <= 10)
    {
        cube = i*i*i;
        printf("%d \t %d \n", i, cube);
        i++;
    }
    return 0;
}