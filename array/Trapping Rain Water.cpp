#include <bits/stdc++.h>
using namespace std;

int maxWater(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        // finding the maximum elements on its left
        int left = arr[i];
        for (int j = 0; j < i; j++)
        {
            left = max(left, arr[j]);
        }

        // finding the maximum elements in the right
        int right = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            right = max(right, arr[i]);
        }

        // finding maximum water
        res += (min(left, right) - arr[i]);
    }
}

int main()
{
    int arr[] = {2, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Ans: " << maxWater(arr, n) << endl;

    return 0;
}