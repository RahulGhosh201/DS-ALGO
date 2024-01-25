#include <stdio.h>

void soln(int n)
{
    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= m; k++)
        {
            if (k == 1 || k == m || i == 1) // k==1 for the middle *s as it's comes after the spaces created by j for loop and k==m will create *s and i==1 for the first row
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
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
//  *  *
//   * *
//    **
//     *