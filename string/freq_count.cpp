#include<bits/stdc++.h>
using namespace std;

//without using map
// void compressString(string str,int n){
//     int max=26;
//     int freq[max]={0};
//     for(int i=0;i<n;i++){
//         freq[str[i]-'a']++;
//     }
//     for(int i=0;i<max;i++){
//         if(freq[i]==0)
//             continue;
//         cout<<(char)(i+'a')<<"->"<<freq[i]<<endl;
//     }
// }


//using map
int main()
{
    string str="geeksforgeeks";
    // int n=str.length();
    // compressString(str,n);
    map<char,int> mp;
    for(auto it:str){
        mp[it]++;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}