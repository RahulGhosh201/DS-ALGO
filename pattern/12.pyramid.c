#include <stdio.h>

void soln(int n)
{
    int m = 1, q = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = q; k >= 0; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= m; j++)
        {
            printf("*");
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
//    ***
//   *****
//  *******
// *********