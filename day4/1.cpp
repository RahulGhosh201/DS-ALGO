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

void primeFactors(int n){
    int k=0,arr[10],temp=1,ans=0;
    for(int i=2;i<n;i++){
        if((n%i==0) && isPrime(i))
            arr[k++]=i;
    }
    for(int i=0;i<k;i++){
        temp=temp*arr[i];
        ans=n/temp;
    }
    arr[k++]=ans;
    sort(arr,arr+k);
    cout<<"Prime factors of "<<n<<" is: ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    primeFactors(315);
    return 0;
}