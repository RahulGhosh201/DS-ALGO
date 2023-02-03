// 9 10 11 12 
// 6 7 8
// 4 5
// 3
#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0,temp=9;
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
            temp++;
        }temp/=2;
        k--;
        cout<<endl;
    }
}