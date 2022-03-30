#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("Elements in an array are: \n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}-