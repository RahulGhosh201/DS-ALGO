#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    //n3
    // int arr[]={10, 21, 22, 100, 101, 200, 300};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int count=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         for(int k=j+1;k<n;k++)
    //         {
    //             if(arr[i]+arr[j]>arr[k] && arr[k]+arr[j]>arr[i] && arr[i]+arr[k]>arr[j])
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    // }

    //n2
    vector<int> v={10, 21, 22, 100, 101, 200, 300};
    sort(v.begin(),v.end());
    int n=v.size();
    int count=0;
    for(int i=n-1;i>=1;i--)
    {
        int left=0,right=i-1;
        while(left<right)
        {
            if(v[left]+v[right]>v[i])
            {
                count+=right-left;
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    cout<<"There are "<<count<<" possible triangles"<<endl;
}