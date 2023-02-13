#include<bits/stdc++.h>
using namespace std;

void solve(string digit,int index,string output,vector<string>& ans,string mapping[])
{
    if(index>=digit.length())
    {
        ans.push_back(output);
        return;
    }
    int number=digit[index]-'0';
    string value=mapping[number];
    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digit,index+1,output,ans,mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digit)
{
    int index=0;
    string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    string output;
    solve(digit,index,output,ans,mapping);
    return ans;
}