#include<bits/stdc++.h>
using namespace std;

void swapChar(string str,int b,int c){
    int n=str.length();
    for(int i=0;i<b;i++){
        int pos=(i+c)%n;
        swap(str[i],str[pos]);
    }
    cout<<"After: "<<str<<endl;
}


int main()
{
    string str="ABCDEFGH";
    int b=4,c=3;
    cout<<"Before: "<<str<<endl;
    swapChar(str,b,c);
    return 0;
}