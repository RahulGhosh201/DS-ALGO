//       *   
//     *   *
//   *   *   *
// *   *   *   *  
#include<bits/stdc++.h.>
using namespace std;

int main()
{
    int row=0,col=0,temp=1;
    cout<<"Enter the no of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=0;j<(row-i);j++)
        {
            cout<<" "<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*"<<" "<<" "<<" ";
        }
        temp++;
        cout<<endl;
    }
}