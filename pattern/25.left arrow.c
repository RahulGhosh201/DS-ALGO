#include <stdio.h>

void soln(int n)
{
    int a = n - 1, b = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = a; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = b; k >= 1; k--)
        {
            printf("*");
        }
        a--;
        b--;
        printf("\n");
    }
    int c = 1, d = 2;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = c; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = d; k >= 1; k--)
        {
            printf("*");
        }
        c++;
        d++;
        printf("\n");
    }
}

int main()
{
    int n = 0;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    soln(n);
    return 0;
}

//     *****
//    ****
//   ***
//  **
// *
//  **
//   ***
//    ****
//     *****