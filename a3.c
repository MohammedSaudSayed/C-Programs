#include<stdio.h>
int main()
{
    int arr[10] = {6, 7, 4, 2, 5, 4, 9, 0, 8, 7};
    int i;
    printf("Elements in an array are: \n");
    for (i = 0; i <= 9; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}