// 3 
// 4 5
// 6 7 8
// 9 10 11 12 
#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0,temp=3;
    cout<<"Enter the no of rows:"<<endl;
    cin>>row;
    cout<<"Enter the no of cols:"<<endl;
    cin>>col;
    int k=row;
    for(int i=1;i<=row;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
}