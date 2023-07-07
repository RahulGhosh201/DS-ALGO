#include<bits/stdc++.h>
using namespace std;

void series(int n){
    int diff=1,a=1;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a=a+diff;
        diff++;
    }
}

int main()
{
    series(5);
    return 0;
}