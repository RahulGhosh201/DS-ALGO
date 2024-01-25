#include <stdio.h>

void soln(int n)
{
    int m = 1, q = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = q; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= m; k++)
        {
            if (k == 1 || i == n || k == m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        m += 2;
        q--;
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
//     *
//    * *
//   *   *
//  *     *
// *********