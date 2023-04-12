#include<bits/stdc++.h>
using namespace std;

string addStar(string str,int arr[]){
    string ans="";
    int j=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<str.length();i++){
        if (j < size && i == arr[j]) {
            ans += '*';
            j++;
        }
        ans += str[i];
    }

    return ans;
}

int main()
{
    string str="geeksforgeeks";
    int arr[]={1,5,7,9};
    string ans=addStar(str,arr);
    cout<<ans<<endl;
    return 0;
}