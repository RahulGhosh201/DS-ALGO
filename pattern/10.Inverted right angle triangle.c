#include <stdio.h>

void soln(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
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

// *****
// ****
// ***
// **
// *