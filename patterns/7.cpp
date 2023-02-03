// 10 9 8 7 
// 6 5 4
// 3 2
// 1
#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0,temp=10;
    cout<<"Enter the no of rows:"<<endl;
    cin>>row;
    cout<<"Enter the no of cols:"<<endl;
    cin>>col;
    int k=row;
    for(int i=1;i<=row;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<temp<<" ";
            temp--;
        }
        
        k--;
        cout<<endl;
    }
}