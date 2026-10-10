#include <stdio.h>

int a,b,c;

int main()
{
    printf("Your num : ");
    scanf("%d", &a);

    printf("Your num2 : ");
    scanf("%d", &b);

    c = a + b;
    if (c % 2 == 0)
    {
        printf("Result of %d is even numbers!", c);
    } else{
        printf("Result of %d is odd numbers!", c);
    }
    
}