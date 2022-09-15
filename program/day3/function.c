#include <stdio.h>

void Hello();
void Max2(int, int);
int min2(int, int);
int max2(int, int);

int main()
{
    // Hello();

    // int a, b;
    // scanf("%d%d", &a, &b);
    // max(a, b);

    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        // 1 5
        // 2 3
        // 1 0
        // 5 + 3 + 1 = 9
        int x, y;
        scanf("%d%d", &x, &y);
        ans += max2(x, y);
    }
    printf("%d", ans);
}

void Hello()
{
    char x[500];
    printf("Please enter your name: ");
    scanf("%s", &x);
    printf("Hello %s\n", x);
}

void Max2(int a, int b)
{
    if (a > b)
    {
        printf("%d", a);
    }
    if (b >= a)
    {
        printf("%d", b);
    }
}

int min2(int a, int b)
{
    return a + b - max2(a, b);
}

int max2(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    if (a <= b)
    {
        // 5
        return b;
    }
}