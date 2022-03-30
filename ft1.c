// with return type - with paranthesis
#include<stdio.h>
int add(int n1, int n2); // Declaration
int main()
{
    int ans;
    ans = add(5 , 5);  // Call
    printf("The addition is %d \n", ans);
    return 0;
}
// Definition
int add(int n1, int n2)  
{
    int sum = 0;
    sum = n1 + n2;
    return sum;
}