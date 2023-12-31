#include <bits/stdc++.h>
using namespace std;

void soln(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int currSum = arr[i];
        if (currSum = sum)
        {
            cout << sum << " found at index " << i << endl;
            return;
        }
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                currSum += arr[i];
                if (currSum == sum)
                {
                    cout << sum << " found at indexes in between " << i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found" << endl;
    return;
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5}, sum = 33;
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n, sum);
    return 0;
}