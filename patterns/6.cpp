// 6 6 6 6 
// 5 5 5
// 4 4 
// 3
#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0,temp=6;
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
        }
        temp--;
        k--;
        cout<<endl;
    }
}