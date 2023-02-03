// 1 1 1 1
// 1 1 1 1 
// 1 1 1 1
// 1 1 1 1
#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0;
    cout<<"Enter the no of rows:"<<endl;
    cin>>row;
    cout<<"Enter the no of cols:"<<endl;
    cin>>col;
    for(int i=0;i<row;i++)
    {
        for(int i=0;i<col;i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
}