#include <stdio.h>

int main()
{
    int n, i = 1, j = 1;

    printf("Enter number :");
    scanf("%d" ,&n);
    while (i <= n)
    {

        while (j <= n)
        {
            if (i == 1 | i == n | j == 1 | j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            j++;
        }
        j = 1;
        printf("\n");

        i++;
    }
    
        return 0;
}