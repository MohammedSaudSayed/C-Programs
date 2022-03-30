#include<stdio.h>
int main()
{
    int i;
    int n;
    int cube = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 10; i >= n; i--)
    {
        cube = i*i*i;
        printf("The cube is: %d \t %d \n", i, cube);
    }
    return 0;
}