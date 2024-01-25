#include <stdio.h>

void soln(int n)
{
    int m = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("*");
        }
        m--;
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
//     *****
//    *****
//   *****
//  *****
// *****