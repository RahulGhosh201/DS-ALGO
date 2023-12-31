#include <bits/stdc++.h>
using namespace std;

int soln(int arr1[], int arr2[], int n1, int n2, int m)
{

    int ans[n1 + n2], k = 0;
    for (int i = 0; i < n1; i++)
    {
        ans[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        ans[k++] = arr2[i];
    }
    sort(ans, ans + k);
    return ans[m - 1];
}

int main()
{
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k = 5;
    cout << "Ans: " << soln(arr1, arr2, n1, n2, k) << endl;
    return 0;
}