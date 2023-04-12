#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string str1="geeksforgeeks";
    // string str2="geeksforgeeks";
    // if(str1==str2){
    //     cout<<"Both the strings are same"<<endl;
    // }
    // else{
    //     cout<<"Both the strings are not same"<<endl;
    // }
    char str1[100];
    char str2[100];
    cout<<"str1: "<<endl;
    cin>>str1;
    cout<<"str2: "<<endl;
    cin>>str2;

    if(strcmp(str1,str2)==0){
        cout<<"Both the strings are same"<<endl;
    }
    else{
        cout<<"Both the strings are not same"<<endl;
    }
}