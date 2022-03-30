#include<stdio.h>
void square(int a)
{
    int total;
    total = a * a;
    printf("The square of %d: %d", a, total);
}

void cube(int a)
{
    int total;
    total = a * a * a;
    printf("The cube of %d: %d", a, total);
}

int main()
{
    int choice;
    abc:
    printf("\n Please Enter 1 for Square \n Please Enter 2 for Cube \n Please Enter 3 to Exit \n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        int num1;
        printf("Enter a Number for square \n");
        scanf("%d", &num1);
        square(num1);
        goto abc;
    }

    else if(choice == 2)
    {
        int num1;
        printf("Enter a Number for cube \n");
        scanf("%d", &num1);
        cube(num1);
        goto abc;
    }

    else if(choice == 3)
    {
        printf("Thank You");
    }

    else
    {
        printf("Please Enter correct data");
    }
    
    return 0;
}
