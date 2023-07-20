#include<bits/stdc++.h>
using namespace std;

void leftRotate(string &s, int d){
    reverse(s.begin(),s.begin()+d);
    reverse(s.begin()+d,s.end());
    reverse(s.begin(),s.end());
}

void rightRotate(string &s, int d){
    leftRotate(s,s.length()-d);
}

int main()
{
    string str="Hello5678";
    int d=4;
    if(str.length()<d)
    {
        cout<<str<<" -position exceeds length"<<endl;
    }else{
    rightRotate(str,d);
    for(int i=0;i<str.length();i++){
            cout<<(char)tolower(str[i]);
        }
    }
    return 0;
}