#include <stdio.h>

void soln(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
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
// *****
// *****
// *****
// *****
// *****