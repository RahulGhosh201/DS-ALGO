#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void series(int n){
    vector<int> prime;
    vector<int> fib;
    for(int i=0;i<=3*n;i++){
        if(isPrime(i)==1 && i!=1 && i!=0){
            prime.push_back(i);
        }
    }
    int a=1,b=1;

    for(int i=0;i<n;i++){
        fib.push_back(a);
        fib.push_back(b);
        a=a+b;
        b=a+b;
    }
    cout<<"Series: ";
    for(int i=0;i<n;i++){
        cout<<fib[i]<<" "<<prime[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n=5;
    series(n);
    return 0;
}