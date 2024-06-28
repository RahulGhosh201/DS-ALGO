// smallest positive number missiing from an unsorted array
#include <stdio.h>

int mini(int *arr, int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int maxi(int *arr, int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

#define MAX 100
int soln(int *arr, int n)
{
    int min = mini(arr, n);
    int max = maxi(arr, n);
    int freq[MAX] = {0};
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = min; i <= max; i++)
    {
        if (freq[arr[i]] == 0 && i > 0)
        {
            return i;
        }
    }
}

int main()
{
    int arr[] = {3, 1, 4, 10, -5, 15, 2, -10, -20};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", soln(arr, n));
    return 0;
}