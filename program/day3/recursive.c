#include <stdio.h>

// int sumFrom1ToN(int n) // 9
// {
//     if (n < 1)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     return sumFrom1ToN(n - 1) + n;
// }

// 10 -> sumFrom1ToN(9) + 10 -> 45+10 -> 55
// 9 -> sumFrom1ToN(8) + 9 -> 36 + 9 -> 45
// 8 -> sumFrom1ToN(7) + 8 -> 28 + 8 -> 36
// 7 -> sumFrom1ToN(6) + 7 -> 21 + 7 -> 28
//...
// 2 -> 1 + 2 = 3
// 1 -> 1

int way(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return way(n - 1) + way(n - 2);
}

int main()
{
    // int i = 0, s = 0;
    // for (i = 1; i <= 10; i++)
    // {
    //     s = s + i;
    // }
    // printf("s = %d\n", s);

    // printf("recur = %d", sumFrom1ToN(10));
    int n;
    scanf("%d", &n);
    printf("%d", way(n));
}

// walk 1 2
// how many possible way to go stair n
// 1 -> 1 way
// 2 -> 2 way
// 3 -> 3 way 111 12 21

// n -> way(n-1) + way(n-2)
// walk 1 from n-1
// walk 2 from n-2