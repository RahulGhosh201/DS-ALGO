#include <bits/stdc++.h>
using namespace std;

void soln(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    int ans[n1 + n2];
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            ans[k++] = arr1[i++];
        }
        else
        {
            ans[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        ans[k++] = arr1[i++];
    }
    while (j < n2)
    {
        ans[k++] = arr2[j++];
    }
    cout << "Ans: ";
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    soln(arr1, arr2, n1, n2);
    return 0;
}