#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    cout<<(s1==s2);
}
// wheather to strings are same