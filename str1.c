#include<stdio.h>
struct student
{
    int rollno;
    float percentage;
};

int main()
{
    struct student s1;
    printf("Enter roll no: \n");
    scanf("%d", &s1.rollno);

    printf("Enter percentage: \n");
    scanf("%f", &s1.percentage);

    printf("\n The roll no is %d \n The percentage is %f", s1.rollno, s1.percentage);
    return 0;
}
