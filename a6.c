#include<stdio.h>
int main()
{
    int arr[6];
    int i;
    printf("Elements in an array are: \n");
    for (i = 0; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 5; i >= 0; i--)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}