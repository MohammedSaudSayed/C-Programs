#include<stdio.h>
int main()
{
    int i, j, arr[3][3];
    printf("Elements in an array: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements in an array: ");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d \n", arr[i][j]);
        }
    }
    return 0;
}