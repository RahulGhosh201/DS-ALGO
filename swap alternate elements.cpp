#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main()
{
    int even[6]={1,5,12,3,4,5};
    int odd[5]={10,2,3,1,5};
    
    cout<<"even array before alternate: "<<endl;
    printArray(even,6);
    cout<<"even array after alternate: "<<endl;
    swapAlternate(even,6);
    printArray(even,6);

    cout<<"odd array before alternate: "<<endl;
    printArray(odd,6);
    swapAlternate(odd,6);
    cout<<"odd array after alternate: "<<endl;
    printArray(odd,6);


}
