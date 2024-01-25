#include <stdio.h>

void soln(int n)
{
    int s = n / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i == ((n / 2) + 1))
        {
            for (int k = 1; k <= n; k++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= s; j++)
            {
                printf(" ");
            }
            printf("*");
        }
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
//     +
//     +
//     +
//     +
// +++++++++
//     +
//     +
//     +
//     +