#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    pattern(5);
    return 0;
}

// * * * * * 
// * * * *   
// * * *     
// * *       
// *   