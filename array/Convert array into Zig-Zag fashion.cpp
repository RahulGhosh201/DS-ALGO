#include <bits/stdc++.h>
using namespace std;

void soln(int arr[], int n)
{
    for (int i = 1; i < n - 1; i += 2)
    {
        if (arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    cout << "Ans: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}