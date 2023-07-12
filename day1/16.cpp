#include<bits/stdc++.h>
using namespace std;

void series(int n){
    char x='A';
    char y='M';
    for(int i=0;i<n;i++){
        cout<<x<<y<<y<<" ";
        x=(char)(x+2);
        y=(char)(y+2);
    }cout<<endl;
}

int main()
{
    series(3);
    return 0;
}