// without return type - with paranthesis
#include<stdio.h>
void add(int n1, int n2); 
void main()
{
    add(5, 20);
}
void add(int n1, int n2)  
{
    int sum = 0;
    sum = n1 + n2;
    printf("Sum is %d", sum);
}