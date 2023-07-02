#include<bits//stdc++.h>
using namespace std;

void kthLargestElent(int arr[],int n,int k){
    // int ans=0;
    // sort(arr,arr+n);
    // std::cout<<k<<"th largest element is "<<arr[n-k]<<endl;
    set<int> s(arr,arr+n);
    set<int> ::iterator itr=s.begin();
    advance(itr,n-k);
    std:: cout<<k<<"th largest element is "<<*itr<<endl;
}

int main(){
    int arr[10];
    int n,k;
    std::cout<<"Enter size of the vector:"<<endl;
    std::cin>>n;
    std::cout<<"Enter the elements of the vector:"<<endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<"Enter value of k:"<<endl;
    std::cin>>k;
    kthLargestElent(arr,n,k);
}