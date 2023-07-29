#include<bits/stdc++.h>
using namespace std;

void common(int arr1[],int arr2[],int arr3[],int x,int y,int z){
    int temp=0;
    set<int> a;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(arr1[i]==arr2[j]){
                temp=arr1[i];
            }
            for(int k=0;k<z;k++){
                if(temp==arr3[k]){
                    a.insert(temp);
                }
            }
        }
    }
    for(auto it: a){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[]={1, 5, 10, 20, 40, 80};
    int arr2[]={6, 7, 20, 80, 100};
    int arr3[]={3, 4, 15, 20, 30, 70, 80, 120};
    int x=sizeof(arr1)/sizeof(arr1[0]);
    int y=sizeof(arr2)/sizeof(arr2[0]);
    int z=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"The common elements are: ";
    common(arr1,arr2,arr3,x,y,z);
    return 0;
}