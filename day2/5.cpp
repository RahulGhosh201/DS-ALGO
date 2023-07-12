#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void sumOfPrime(int n1, int n2){
    int sum=0;
    for(int i=n1;i<=n2;i++){
        if(isPrime(i) && i!=1){
            sum+=i;
        }
    }
    cout<<"Sum of prime numbers between "<<n1<<" and "<<n2<<" is "<<sum<<endl;
}

int main()
{
    int n1=1,n2=6;
    sumOfPrime(n1,n2);
    return 0;
}