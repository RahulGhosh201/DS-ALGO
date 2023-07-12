#include<bits/stdc++.h>
using namespace std;

void perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        {
            int rem=i;
            sum+=rem;
        }
    }
    if(sum==n){
        cout<<n<<" is a perfect number"<<endl;
    }else{
        cout<<n<<" is not a perfect number"<<endl;
    }
}

int main()
{
    int n=10;
    perfect(n);
    return 0;
}