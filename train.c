#include <stdio.h>

int main()
{
    int a, sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Input num%d : ", i);
        scanf("%d", &a);

        if (a > 5)
        {
            sum += 1;
        }
    }
    printf("Total = %d\n", sum);
    
}