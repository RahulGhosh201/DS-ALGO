#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="hello world";
    int count[26]={0};
    for(int i=0;i<s.length();i++)
    {
        int index=s[i]-'a';
        count[index]++;
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i]<<"-->"<<count[i]+1<<endl;
    }
}