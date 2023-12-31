#include <bits/stdc++.h>
using namespace std;

int soln(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int k = i - 1; k >= 0; k--)
        {
            sum1 += v[k];
        }
        for (int k = i + 1; k < v.size(); k++)
        {
            sum2 += v[k];
        }
        if (sum1 == sum2)
        {
            return v[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {2, 3, 4, 1, 4, 5};
    int ans = soln(v);
    cout << "Ans: " << ans << endl;
    return 0;
}