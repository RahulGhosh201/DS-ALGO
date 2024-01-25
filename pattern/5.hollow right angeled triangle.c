#include <stdio.h>

void soln(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == n || i == j || j == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
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
// 1
// 12
// 1 3
// 1  4
// 12345

// *
// **
// * *
// *  *
// *****