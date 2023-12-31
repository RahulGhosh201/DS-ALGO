#include <bits/stdc++.h>
using namespace std;

void reverse(int v[], int n, int k)
{
    // int j = 0, i = k;
    // while (i < n)
    // {
    //     reverse(v + j, v + i);
    //     i += k;
    //     j += k;
    // }
    // reverse(v + j, v + n);
    int j = 0, i = k;
    while (n != 0)
    {

        reverse(v + j, v + i);
        i += k;
        j += k;
        n /= k;
    }
}

int main()
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(v) / sizeof(v[0]);
    int k = 3;
    reverse(v, n, k);
    cout << "Ans: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}