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
    return 0;
}