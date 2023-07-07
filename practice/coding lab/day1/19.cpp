#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }else{
            flag=0;
        }
    }
    if(flag==0)
        return true;
    else
        return false;
}


void sOfPrime(int n){
    int sum=0,count=0;

    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            count++;
            sum+=i;
        }
    }
    cout<<"Sum of first "<<count<<" prime numbers are: "<<sum<<endl;
}

int main()
{
    sOfPrime(10);
    return 0;
}