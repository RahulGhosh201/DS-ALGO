// *  *  *  *  *  *  *  
//    *  *  *  *  *
//       *  *  *  
//          *
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row=0,temp=7,temp1=1;
    cout<<"Enter no of rows:"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=temp;j++)
        {
            cout<<"*"<<" "<<" ";
            temp1++;
        }
        cout<<endl;
        for(int k=0;k<i;k++)
        {
            cout<<" "<<" "<<" ";
        }
        temp-=2;
    }
}