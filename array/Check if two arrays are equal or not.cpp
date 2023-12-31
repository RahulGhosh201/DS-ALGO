#include <bits/stdc++.h>
using namespace std;

bool soln(int arr1[], int arr2[], int n1, int n2)
{
    if (n1 != n2)
    {
        return false;
    }
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);
    for (int i = 0; i < n1; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
    // map<int, int> m;

    // for (int i = 0; i < n1; i++)
    // {
    //     m[arr1[i]]++;
    // }
}

int main()
{
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Ans: " << soln(arr1, arr2, n1, n2) << endl;
    return 0;
}