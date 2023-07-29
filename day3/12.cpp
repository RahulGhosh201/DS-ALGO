#include<bits/stdc++.h>
using namespace std;

int checkPrime(int i, int num){
    if(num==i){
        return 0;
    }else{
        if(num%i==0)
            return 1;
        else
            return checkPrime(i+1,num);
    }
}

int main()
{
    int num=8;
    if(checkPrime(2,num)==0){
        cout<<"It's a prime number"<<endl;
    }else{
        cout<<"It's not a prime number"<<endl;
    }
}