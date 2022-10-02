#include <stdio.h>
int main()
{   
    int x;
    int n[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n[i]); 
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            
            if (n[i] > n[j])
            {
                int a;
                a = n[i];
                n[i] = n[j];
                n[j] = a;
            }
        }
    }
    printf("%d",n[0]+n[1]);


return 0;
}