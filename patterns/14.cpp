#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0;
    cout<<"Enter the no of rows:"<<endl;
    cin>>row;
    cout<<"Enter the no of cols:"<<endl;
    cin>>col;
    int k=row;
    for(int i=1;i<row;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        for(int k=0;k<row;k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        for(int j=0;j<k;j++)
        {
            cout<<"*"<<" ";
        }
        k--;
        cout<<endl;
    }
}