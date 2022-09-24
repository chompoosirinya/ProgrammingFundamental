#include <stdio.h>
int main(){
    float num1, num2,x=0 ;
    printf("num1 :");
    scanf("%f",&num1);
    printf("num2 :");
    scanf("%f",&num2);
    for ( ; num1 <= num2; num1++)
    {
        x += num1;
        
        
    }
         printf("%.2f",x);

    return 0;
}