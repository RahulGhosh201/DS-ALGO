#include<bits/stdc++.h>
using namespace std;

void series(int n){
    string x="BC";
    char y='A';
    int z=1;
    for(int i=0;i<n;i++){
        cout<<x<<y<<z<<" ";
        y=(char)(y+1);
        z++;
    }cout<<endl;

}

int main()
{
    series(4);
    return 0;
}