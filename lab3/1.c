#include <stdio.h>
int main()
{

    int n, x, y = 0;
    printf("enter number :");
    scanf("%d", &n);

    while (1)
    {
        if (n > 0)
        {
            x = n % 10;
            y += x;
            n = n / 10;
        }
        else
        {   
          printf("%d -> ", y);


            if (y >= 10)
            {
            
             n=y;
             y=0;

            }
            else
                {
                    break;
                }
        }
    }

    return 0;
}
