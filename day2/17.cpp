#include <bits/stdc++.h>
using namespace std;
 
void reverse(string &str, int k)
{
    int i = 0;
    if (k == str.length()) {
        return;
    }
    reverse(str, k + 1);
    if (i <= k) {
        swap(str[i++], str[k]);
    }
}
 
int main()
{
    string str = "rahul ghosh";
    reverse(str, 0);
    cout << "Reverse of the given string is " << str;
    return 0;
}