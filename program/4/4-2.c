#include <stdio.h>

int main()
{
    float num1, num2, x;
    char o;
    printf("enter number1 ");
    scanf("%f", &num1);
    printf("enter o ");
    scanf(" %c", &o);
    printf("enter number2 ");
    scanf("%f", &num2);

    switch (o)
    {
    case '+':
        x = num1 + num2;
        break;
    case '-':
        x = num1 - num2;
        break;
    case '*':
        x = num1 * num2;
        break;
    case '/':
        x = num1 / num2;
        break;
    }

    printf("%f", x);

    return 0;
}