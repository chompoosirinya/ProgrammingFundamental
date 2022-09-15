#include <stdio.h>
int main()
{
    // int n[9];
    /*
    0 1 2
    3 4 5
    6 7 8
    */
    // if (1)
    // {
    //     if (n[0] == n[1] && n[1] == n[2])
    //     {
    //         printf("someone win gameend");
    //     }
    //     if (n[3] == n[4] && n[4] == n[5])
    //     {
    //         printf("someone win gameend");
    //     }
    //     if (n[6] == n[7] && n[7] == n[8])
    //     {
    //         printf("someone win gameend");
    //     }
    //     if (n[0] == n[3] && n[3] == n[6])
    //     {
    //         printf("someone win gameend");
    //     }
    //     if (n[1] == n[4] && n[4] == n[7])
    //     {
    //         printf("someone win gameend");
    //     }
    //     if (n[2] == n[5] && n[5] == n[8])
    //     {
    //         printf("someone win gameend");
    //     }
    //     if (n[0] == n[4] && n[4] == n[8])
    //     {
    //         printf("someone win gameend");
    //     }
    //     if (n[2] == n[4] && n[4] == n[6])
    //     {
    //         printf("someone win gameend");
    //     }
    // }

    int n[3][3];
    // n = {0,1,2,3,4,5,6,7,8}
    // n = { {0, 1, 2},
    //       {0, 1, 2},
    //       {0, 1, 2} }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }

    /*
    0,0  0,1  0,2  row 0
    1,0  1,1  1,2  row 1
    2,0  2,1  2,2  row 2
    col0 col1 col2
    */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
}