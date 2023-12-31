#include <bits/stdc++.h>
using namespace std;

vector<int> soln(vector<int> v)
{
    // sort(v.begin(), v.end());
    // return v;

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            cnt0++;
        else if (v[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    v.clear();
    while (cnt0 != 0)
    {
        v.push_back(0);
        cnt0--;
    }
    while (cnt1 != 0)
    {
        v.push_back(1);
        cnt1--;
    }
    while (cnt2 != 0)
    {
        v.push_back(2);
        cnt2--;
    }

    return v;
}

int main()
{
    vector<int> v = {0, 1, 2, 0, 1, 2};
    vector<int> ans = soln(v);
    cout << "Ans: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}