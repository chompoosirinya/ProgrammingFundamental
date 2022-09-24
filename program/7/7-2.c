#include <stdio.h>
int main(){

    float num1, num2, n=0 ,x=0 ;
    printf("num1 :");
    scanf("%f",&num1);
    printf("num2 :");
    scanf("%f",&num2);
    n=(num2-num1)+1;
    x = n/2*(num1+num2);
    printf("%.2f",x);

    return 0;
}