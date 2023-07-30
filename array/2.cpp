#include<bits/stdc++.h>
using namespace std;

void majorityElement(int arr[], int size){
    map<int,int> freq;
    int ans=-1;
    for(int i=0;i<size;i++)
    {
        freq[arr[i]]++;
    }

    for(auto it: freq){
        if(it.second>(size/2)){
            ans=it.second;
            break;
        }
    }
    cout<<"Majority element: "<<ans<<endl;
}

int main()
{
    int N = 5; 
    int A[] = {3,1,3,3,2};
    majorityElement(A,N);
    return 0;
}