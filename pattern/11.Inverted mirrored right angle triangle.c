#include <stdio.h>

void soln(int n)
{
    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= m; k++)
        {
            printf("*");
        }
        printf("\n");
        m--;
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
// *****
//  ****
//   ***
//    **
//     *
