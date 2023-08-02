#include<bits/stdc++.h>
using namespace std;

void rep(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            cout<<str[i];
        }else{
            cout<<"%20";
        }
    }cout<<endl;
}

int main()
{
    string str="Java is Great";
    rep(str);
    return 0;
}