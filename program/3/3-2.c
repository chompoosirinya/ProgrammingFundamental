#include <stdio.h>
int main()
{
    int a,n,x;

    printf("a :");
    scanf("%d",&a);
    printf("n :");
    scanf("%d",&n);

    x=a;
    for (int i = 1; i < n; i++)
    {
        x=x*a;
    }
    
    printf("%d",x);

    return 0;
}