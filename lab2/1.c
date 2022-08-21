#include <stdio.h>

int main()
{
    int n, x = 2;
    printf("Enter number:");
    scanf("%d", &n);
    while (n > 1)
    {
        if (n % x == 0)
        {
            n = n / x;
            printf("%d", x);
            if (n > 1)
            {
                printf(" x ");
            }
        }

        else
        {
            x = x + 1;
        }
    }

    return 0;
}
