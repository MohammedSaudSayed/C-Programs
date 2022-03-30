#include<stdio.h>

struct student
{
    int rollno;
    float percentage;
};

int main()
{
    int i;
    struct student s[5];

    printf("Enter Students Details \n");

    for (i = 0; i <= 4; i++)
    {
        printf("Students %d rollno and percentage: \n", i + 1);
        scanf("%d %f", &s[i].rollno, &s[i].percentage);
    }

    for (i = 0; i <= 4; i++)
    {
        printf("%d \t %f \n", s[i].rollno, s[i].percentage);
    }

    return 0;
}