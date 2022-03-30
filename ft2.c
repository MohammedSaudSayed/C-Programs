// without return type - without paranthesis
#include<stdio.h>
void add(); 
void main()
{
    add();
}
void add()  
{
    int n1, n2, sum = 0;
    printf("Enter Two Numbers: \n");
    scanf("%d %d", &n1, &n2);
    sum = n1 + n2;
    printf("Sum is %d", sum);
}