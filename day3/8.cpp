#include<bits/stdc++.h>
using namespace std;

void rev(int n){
    // int temp=n,ans=0;

    // while(n!=0){
    //     int rem=n%10;
    //     ans=ans*10+rem;
    //     n=n/10;
    // }
    // cout<<"Reverse of "<<temp<<" is "<<ans<<endl;
    if(n<10){
        cout<<n;
        return;
    }else{
        cout<<n%10;
        rev(n/10);
    }
}

int main()
{
    rev(123);
    return 0;
}