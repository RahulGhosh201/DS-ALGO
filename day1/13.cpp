#include<bits/stdc++.h>
using namespace std;

void series(int n)
{
    char c='A';
    int x=1;
    for(int i=0;i<n;i++){
        cout<<c<<x++<<" ";
        c=(char)(c+1);
    }cout<<endl;
}

int main()
{
    series(26);
    return 0;
}