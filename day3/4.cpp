#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
    if(n!=0){
       return n + sumOfN(n-1);
    }else{
        return n;
    }
}

int main()
{
    int ans=sumOfN(5);
    cout<<"Sum of 5 is "<<ans<<endl;
    return 0;
}