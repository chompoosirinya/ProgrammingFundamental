#include <stdio.h>
int main(){

    int n,x = 1;
    printf("enter number :");
    scanf("%d", &n);
    while (x <= n)
    {
        printf("*");
        x=x+1;
    }
    



    return 0;
}