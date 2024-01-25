#include <stdio.h>

void soln(int n)
{
    int a = 1, b = n - 1, c = 1, d = 2 * n - 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = b; j >= 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= a; k++)
        {
            printf("*");
        }
        printf("\n");
        b--;
        a += 2;
    }
    // printf("\n");
    for (int l = 1; l <= n - 1; l++)
    {
        for (int m = 0; m <= c; m++)
        {
            printf(" ");
        }
        for (int q = d; q >= 1; q--)
        {
            printf("*");
        }
        printf("\n");
        c += 1;
        d -= 2;
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
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *