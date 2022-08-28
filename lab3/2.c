#include <stdio.h>
int main()
{

    int num, sum = 0, x;
    


    for ( num=1 ; num <= 10000; num++)
    {
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        
        if (sum == num)
        {
            printf("%d  ",num);
            sum=0;
        }
        else
        {
            sum=0;
        }
        
    }

    return 0;
}