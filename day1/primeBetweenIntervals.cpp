#include<bits/stdc++.h>
using namespace std;

// bool isPrime(int n){
//     int flag=0;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             flag=1;
//             break;
//         }
//         else
//             flag=0;
//     }
//     if(flag==0){
//         return true;
//     }else{
//         return false;
//     }
// }

// void prime(int low,int high){

//     for(int i=low;i<=high;i++){
//         if(isPrime(i))
//             cout<<i<<" ";
//     }
// }

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

void prime(int low, int high){
    for(int i=low;i<=high;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int low=2,high=50;
    cout<<"Prime numbers between "<<low<<" and "<<high<<"are: ";
    prime(low,high);
    return 0;
}