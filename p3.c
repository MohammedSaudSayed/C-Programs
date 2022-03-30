#include<stdio.h>
int main()
{
    int x = 500;
    char y = 's';
    char g = 'a';
    char b = 'u';
    char e = 'd';
    float z = 6742.67;
    double w = 6742.67543;
    printf(" The value of x is %d\n", x);
    printf("The value of y is %c\n", y);
    printf("The value of g is %c\n", g);
    printf("The value of b is %c\n", b);
    printf("The value of e is %c\n", e);
    printf("The value of z is %f\n", z);
    printf("The value of w is %f\n", w);
    printf("The address of x is %d\n", &x);
    printf("The address of y is %d\n", &y);
    printf("The address of g is %d\n", &g);
    printf("The address of b is %d\n", &b);
    printf("The address of e is %d\n", &e);
    printf("The address of z is %f\n", &z);
    printf("The address of w is %f\n", &w);
    return 0;
}