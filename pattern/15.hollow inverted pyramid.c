#include <stdio.h>

void soln(int n)
{
    int m = 2 * n - 1, q = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= q; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= m; k++)
        {
            if (i == 1 || k == m || k == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        m -= 2;
        q++;
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

// *********
//  *     *
//   *   *
//    * *
//     *