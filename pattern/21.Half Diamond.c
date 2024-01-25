#include <stdio.h>

void soln(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("*");
        }
        printf("\n");
        a++;
    }
    int b = n - 1;
    for (int k = 1; k < n; k++)
    {
        for (int l = b; l >= 1; l--)
        {
            printf("*");
        }
        printf("\n");
        b--;
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

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *