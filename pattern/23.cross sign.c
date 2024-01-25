#include <stdio.h>

void soln(int n)
{
    int p = 0, q = 2 * n - 3;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= p; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                printf("*");
            }
        }
        for (int a = q; a >= 0; a--)
        {
            printf(" ");
        }
        if (i != n)
        {
            printf("*");
        }

        p++;
        q -= 2;
        printf("\n");
    }
    int b = n - 2, c = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = b; j >= 1; j--)
        {
            printf(" ");
        }
        printf("*");
        for (int k = 1; k <= c; k++)
        {
            printf(" ");
        }
        printf("*");
        c += 2;
        b--;
        printf("\n");
    }
}

int main()
{
    int n = 0;
    printf("Enter no of rows:");
    scanf("%d", &n);
    soln(n);
    return 0;
}
// *       *
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *       *