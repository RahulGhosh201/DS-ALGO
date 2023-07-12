#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal(int n){
    int temp=n;
    int decimal=0,power=1;
    while(temp){
        int last_digit=temp%10;
        decimal+=last_digit*power;
        temp=temp/10;
        power=power*2;
    }
    cout<<"binary: "<<n<<" -> decinal: "<<decimal<<endl;
}

int main()
{
    int n=101;
    binaryToDecimal(n);
    return 0;
}