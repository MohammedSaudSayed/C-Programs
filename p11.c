#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);
    printf("Enter 3rd number: ");
    scanf("%d", &z);
if (x > y)
{
    printf("Number 1 is greater than Numer 2");
}
else if (y > z)
{
    printf("Number 2 is greater than Number 1");
}
else
{
    printf("Number 3 is greater");
}
return 0;
}