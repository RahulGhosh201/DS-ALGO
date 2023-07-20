#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector < string > v;
    for (int i = 0; i < s.length(); i++) {
        v.push_back(s.substr(i, s.length() - i)); //these are the unique substrings created
    }
    sort(v.begin(), v.end(), greater < string > ());//eta r dara descending order e sort korbo
    cout << v[0];

}

//input: abdc
//output: in lexicographical order
// a
// ab
// abd
// abdc
// b
// bd
// bdc
// c
// d
// dc->last one that's the ans
