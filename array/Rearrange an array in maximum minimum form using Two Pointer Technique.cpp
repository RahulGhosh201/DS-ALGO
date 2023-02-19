#include<bits/stdc++.h>
using namespace std;

//o(n) o(n)
// int main()
// {
//     int arr[]={1, 2, 3, 4, 5, 6 };
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int temp[n];
//     int flag=true;
//     int small=0,large=n-1;
//     for(int i=0;i<n;i++)
//     {
//         if(flag)
//         {
//             temp[i]=arr[large--];
//         }
//         else
//         {
//             temp[i]=arr[small++];
//         }
//         flag=!flag;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<temp[i]<<" ";
//     }
//     cout<<endl;
// }
    

//o(n) o(1)
int main()
{
    int arr[]={1, 2, 3, 4, 5, 6 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_index=n-1,min_index=0;
    int max_element=arr[n-1]+1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]+=arr[max_index%max_element]*max_element;
            max_index--;
        }
        else{
            arr[i]+=arr[min_index%max_element]*max_element;
            min_index++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/max_element;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
