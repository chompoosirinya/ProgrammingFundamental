#include <stdio.h>
int main(){

    int x, y, z, sum=0;
    printf("0-30 : ");
    scanf("%d",&x);
    printf("0-30 : ");
    scanf("%d",&y);
    printf("0-30 : ");
    scanf("%d",&z);
    sum=x+y+z;

    for (; sum >= 80;)
    {
        printf("A");
        break;
    }
    for (; sum >= 75 && sum<=79;)
    {
        printf("B+");
        break;
    }
    for (; sum >= 7070 && sum<=74;)
    {
        printf("B");
        break;
    }
    for (; sum >= 65 && sum<=69;)
    {
        printf("C+");
        break;
    }
    for (; sum >= 60 && sum<=64;)
    {
        printf("C");
        break;
    }
    for (; sum >= 55 && sum<=59;)
    {
        printf("D+");
        break;
    }
    for (; sum >= 50 && sum<=54;)
    {
        printf("D");
        break;
    }
    for (; sum < 50;)
    {
        printf("F");
        break;
    }
    



return 0;
}    