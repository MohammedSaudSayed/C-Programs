#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int avg = 0;
    printf("Enter the weight of 5 Students: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("The average weight of 5 Students is %d ", avg);
    if (avg <= 90)
    {
        printf("The Students are Overweight");
    }
    else if (avg <= 70)
    {
        printf("The Students are Healthy in weight");
    }
    else if (avg <= 55)
    {
        printf("The Students are normal in weight");
    }
    else if (avg <= 40)
    {
        printf("The Students are Underweight");
    }
    return 0;
}