#include <stdio.h>

void soln(int n)
{
    int j;
    for (int i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)//i==n for the first row and j==i for the middle *s and j==1 for the first *s in each row
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
// *****
// *  *
// * *
// **
// *