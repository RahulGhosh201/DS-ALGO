#include <stdio.h>

void soln(int n)
{
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("*");
        }
        printf("\n");
        m++;
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
//  *****
//   *****
//    *****
//     *****