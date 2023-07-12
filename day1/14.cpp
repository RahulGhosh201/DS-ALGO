#include<bits/stdc++.h>
using namespace std;

void series(int n){
    char a='A',b='Z';
    for(int i=0;i<n/2;i++){
        b=(char)(b-2);
        cout<<a<<" "<<b<<" ";
        a=(char)(a+1);
        b=(char)(b-2);
        cout<<b<<" ";
        
    }cout<<endl;
}

int main()
{
    series(6);
    return 0;
}