#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(string s){
    cout<<"Before removing duplicates: "<<s<<endl;
    cout<<"After removing duplicates: ";
    
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(m[s[i]]!=-1){
            cout<<s[i];
            m[s[i]]=-1;
        }
    }
}

int main()
{
    string s="engineering";
    removeDuplicates(s);
    return 0;
}
