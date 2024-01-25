#include <stdio.h>

void soln(int n)
{
    int m = 1;
    for (int i = n; i >= 1; i--)
    {                                    // i=5
        for (int j = 1; j <= i - 1; j++) // j=1 to 4 space
        {
            printf(" ");
        }
        for (int k = 1; k <= m; k++) // k=1 to 1 *
        {
            if (k == 1 || k == m || m == n)// k==m use kora oche middle r * gulor jonno and m==n use kora hoche last line r * print korar jnno
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
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
//     *
//    **
//   * *
//  *  *
// *****