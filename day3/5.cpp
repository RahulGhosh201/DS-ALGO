#include<bits/stdc++.h>
using namespace std;

void matching(int arr[], int n){
    //first e ekti for loop r modhye arekta for loop chalie check orbo whether i index r value ta puro loop tar position 6ara onno kothao a6e kina jodi thake tahole tar sathe swap kore nebo eithr using swap(arr[i],arr[j])  or using temp
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                break;
            }
        }
    }

    //tarpor ebar dekhbo i position e i value a6e kina jodi na thake tahole sekhan -1 bosie debo
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            arr[i]=-1;
        }
    }
    cout<<"Ans: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[]={19, 7, 0, 3, 18, 15, 12, 6, 1, 8, 11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    matching(arr,n);
    return 0;
}