#include<bits/stdc++.h>
using namespace std;

// void fc(int arr[], int n){
//     map<int,int> m;
//     for(int i=0;i<n;i++){
//         m[arr[i]]++;
//     }
//     for(auto it: m)
//     {
//         cout<<it.first<<" - "<<it.second<<endl;
//     }
// }


void fc(string str, int n){
    int count[26]={0};
    for(int i=0;i<n;i++){
        int index=str[i]-'a';
        count[index]++;
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<" - "<<count[i]+1<<endl;
    }
}


int main()
{
    string str="Hello world";
    int n=str.length();
    fc(str,n);
    return 0;
}

