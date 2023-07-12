#include<bits/stdc++.h>
using namespace std;

void series(int n){
    float x=1,sum=0;
    for(int i=1;i<=n;i++){
        float temp=(x/i);
        sum+=temp;
    }
    cout<<"Sum of the series: "<<sum<<endl;
}

int main()
{
    series(2);
    return 0;
}