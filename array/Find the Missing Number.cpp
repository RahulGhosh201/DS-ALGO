#include <bits/stdc++.h>
using namespace std;

int soln(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i + 1] == 0)
        {
            return i + 1;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = soln(arr, n);
    cout << "Ans: " << ans << endl;
    return 0;
}