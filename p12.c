#include<stdio.h>
int main()
{
    int p;
    int c;
    int m;
    int avg = 0;
    printf("Enter the Value of Physics, Chemistry & Mathematics: ");
    scanf("%d", &p);
    scanf("%d", &c);
    scanf("%d", &m);
    avg = (p + c + m) / 3;
    printf("The average of 3 subjects are %d", avg);
    if (avg >= 90)
    {
        printf("The Student got A Grade");
    }
    else if (avg >= 75)
    {
        printf("The Student got B Grade");
    }
    else if (avg >= 60)
    {
        printf("The Student got C Grade");
    }
    else if (avg >= 45)
    {
        printf("The Student got D Grade ");
    }
    else
    {
        printf("The Student failed");
    }
    return 0;
}