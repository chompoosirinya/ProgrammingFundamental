#include <stdio.h>
int main(){

    int n,i=1,j=1;
    printf("enter number :");
    scanf("%d",&n);

    for (int i = 1 ; i <= n-1; i++)
    {
       for (int j = 1; j <= i; j++)
       {
       printf("* ");
        
       }
       for (int k = 1; k <= (n-i)*2-1 ; k++)
       {
       printf("  ");
    
       }
    
       for (int j = 1; j <= i; j++)
       {
       printf("* ");
        
       }
       printf("\n");

    }

    for (int i = 1 ; i <= n*2-1; i++)
       {
        printf("* ");
       }

    printf("\n");

     for (int i = n-1 ; i > 0; i--)
    {
       for (int j = 1; j <= i; j++)
       {
       printf("* ");
        
       }
       for (int k = 1; k <= (n-i)*2-1 ; k++)
       {
       printf("  ");
    
       }
    
       for (int j = 1; j <= i; j++)
       {
       printf("* ");
        
       }    
       printf("\n");

    }

    return 0;
}


