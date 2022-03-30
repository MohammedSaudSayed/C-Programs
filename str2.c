#include <stdio.h>

struct Person
{
    int age;
    float weight;
};

int main()
{
    int i;

    struct Person p[5];

    printf("\n Please Enter Information: ");
    for (i = 0; i < 5; i++)
    {
        printf("\n Person %d Age and Weight: ", i + 1);
        scanf("%d %f", &p[i].age, &p[i].weight);
    }
    
    printf("Age\tWeight\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t %f\n", p[i].age, p[i].weight);
    }

    return 0;
}