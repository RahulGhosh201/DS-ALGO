#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> m;
    // cout<<m.empty();
    // //m[11];//here m's key=11 & value=0
    // m[5]=10;//here m's key=5 & value=10
    // cout<<m.empty();
    //int arr[5]={1,2,5,1,2};
    array<int,5> arr{1,2,3,1,2};   
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

}
