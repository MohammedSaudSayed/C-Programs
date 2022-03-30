#include<stdio.h>
void add(int a, int b)
{
    int total;
    total = a + b;
    printf("The addition of %d and %d: %d", a, b, total);
}

void sub(int a, int b)
{
    int total;
    total = a - b;
    printf("The subtraction of %d and %d: %d", a, b, total);
}

void mul(int a, int b)
{
    int total;
    total = a * b;
    printf("The multiplication of %d and %d: %d", a, b, total);
}

void div(int a, int b)
{
    int total;
    total = a / b;
    printf("The division of %d and %d: %d", a, b, total);
}

int main()
{
    int choice;
    abc:
    printf("\n Please Enter 1 for Addition \n Please Enter 2 for Subtraction \n Please Enter 3 for Multiplication \n Please Enter 4 for Division \n Please Enter 5 to Exit \n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        int num1, num2;
        printf("Enter 2 Numbers for addition \n");
        scanf("%d %d", &num1, &num2);
        add(num1, num2);
        goto abc;
    }

    else if(choice == 2)
    {
        int num1, num2;
        printf("Enter 2 Numbers for subtraction \n");
        scanf("%d %d", &num1, &num2);
        sub(num1, num2);
        goto abc;
    }

    else if(choice == 3)
    {
        int num1, num2;
        printf("Enter 2 Numbers for multiplication \n");
        scanf("%d %d", &num1, &num2);
        mul(num1, num2);
        goto abc;
    }

    else if(choice == 4)
    {
        int num1, num2;
        printf("Enter 2 Numbers for division \n");
        scanf("%d %d", &num1, &num2);
        div(num1, num2);
        goto abc;
    }

    else if(choice == 5)
    {
        printf("Thank You");
    }

    else
    {
        printf("Please Enter correct data");
    }

    return 0;
}