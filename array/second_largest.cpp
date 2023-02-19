#include<bits/stdc++.h>
using namespace std;

//naive approach TC-o(nlogn) SC-o(1)
// void secondLargest(int arr[],int n)
// {
    
//     sort(arr,arr+n);
    
//     cout<<"Second largest element in the array: "<<arr[n-2];
// }

// int main()
// {
//     int size=0,arr[50];
//     cout<<"Enter the no of elements in the array:"<<endl;
//     cin>>size;
//     cout<<"Enter the elements in the array:"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     secondLargest(arr,size);
// }

//optimized approch  o(nlogn) sc o(n)
// int main()
// {
//     vector<int>v{10,1,2,3,5,11,5};//initialing the vector with elements
//     set<int>s(v.begin(),v.end());//intializing the set with vector elements

//     v.clear();
//     for(auto it:s)
//     {
//         v.push_back(it);
//     }
//     int n=v.size();
//     cout<<"Second largest element:"<<v[n-2]<<endl;
// }


//more optimized approach o(n) o(1)

int secondLargest(int arr[],int n)
{
    int largest=0,sec=-1;
    
}