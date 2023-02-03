// 9 10 11 12 
// 13 14 15 16
// 17 18 19 20
// 21 22 23 24
#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0,temp=9;
    cout<<"Enter the no of rows:"<<endl;
    cin>>row;
    cout<<"Enter the no of cols:"<<endl;
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<temp<<" ";
            temp++;
        }

        cout<<endl;
    }
}