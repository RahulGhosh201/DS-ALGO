#include <stdio.h>

void soln(int n)
{
    int a = 0, b = 0, c = n;
    for (int i = 1; i <= n; i++)
    {
        while (a != b)
        {
            printf(" ");
            a++;
        }
        // b++;
        for (int j = c; j <= 1; j--)
        {
            printf("*");
        }
        b++;
        c--;
        printf("\n");
    }
    int d = n - 2, e = 2;
    for (int i = 1; i < n; i++)
    {
        for (int j = d; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 2; k > 0; k--)
        {
            printf("*");
        }
        d--;
        e++;
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
//  ****
//   ***
//    **
//     *
//    **
//   ***
//  ****
// *****