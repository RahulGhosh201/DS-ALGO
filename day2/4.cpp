#include<bits/stdc++.h>
using namespace std;

void prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<n<<" is not prime"<<endl;
            return;
        }
    }
    cout<<n<<" is prime"<<endl;
}

int main()
{
    prime(6);
    return 0;
}