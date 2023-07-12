#include<bits/stdc++.h>
using namespace std;

void doubles(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*2;
    }cout<<endl;
}

int main()
{
    doubles(7);
    return 0;
}