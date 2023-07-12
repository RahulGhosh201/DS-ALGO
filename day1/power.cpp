#include<bits/stdc++.h>
using namespace std;

void power(int x, int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*x;
    }
    cout<<x<<"**"<<n<<": "<<ans<<endl;
}

int main()
{
    int x=5,n=4;
    power(x,n);
    return 0;
}