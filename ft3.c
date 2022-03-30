// with return type - without paranthesis
#include<stdio.h>
int add(); 
int main()
{
    int result;
    result = add();
    printf("Sum is %d", result);
    return 0;
}
int add()  
{
    int n1, n2, sum = 0;
    printf("Enter Two Numbers: \n");
    scanf("%d %d", &n1, &n2);
    sum = n1 + n2;
    return sum;
}