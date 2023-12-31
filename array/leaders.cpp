#include <bits/stdc++.h>
using namespace std;

vector<int> soln(vector<int> a)
{
    vector<int> v;
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i + 1] > a[i])
        {
            v.push_back(a[i + 1]);
        }
    }
    v.push_back(a[a.size() - 1]);
    return v;
}

int main()
{
    vector<int> a = {16, 17, 4, 3, 5, 2};
    vector<int> ans = soln(a);
    cout << "Ans: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}