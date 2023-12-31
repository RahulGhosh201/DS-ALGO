#include <bits/stdc++.h>
using namespace std;

int soln(vector<int> v)
{
    int a = INT_MIN, b = 0;
    for (int i = 0; i < v.size(); i++)
    {
        b += v[i];
        if (a < b)
        {
            a = b;
        }
        if (b < 0)
        {
            b = 0;
        }
    }
    return a;
}

int main()
{
    vector<int> v = {-2, -3, 4, -1, -2, 5, -3};
    cout << "Ans: " << soln(v) << endl;
    return 0;
}