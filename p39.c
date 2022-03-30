#include<stdio.h>
int main()
{
    char vowel;
    printf("Enter an alphabet:");
    scanf("%c", &vowel);
    if (vowel == 'a' || vowel == 'e' || vowel =='i'|| vowel == 'o' || vowel == 'u')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
    return 0;
}