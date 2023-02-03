// 13 14 15 16 
// 9 10 11 12
// 5 6 7 8
// 1 2 3 4
#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0,temp=13;
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
        temp-=8;
        cout<<endl;
    }
}