#include<bits/stdc++.h>
using namespace std;

class Queue{
    int front, rear;
    int *arr;
    int size;
    public:
        Queue(){
            size=100001;
            arr=new int[size];
            front=rear=0;
        }
        void enqueue(int x){
            if(rear==size-1){
            cout<<"Queue is full"<<endl;    
            }else{
                rear++;
                arr[rear]=x;
            }
        }

        void dequeue(){
            if(front==rear){
                cout<<"Queue is empty"<<endl;
            }else{
                arr[front]=-1;
                front++;
                if(front==rear){
                    front=0;
                    rear=0;
                }
            }
        }

        void display(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        cout<<endl;
        }

        int front(){
            if(rear==front)
                return -1;
            else
                return arr[front];
        }
        int isEmpty(){
            if(front==rear)
                return true;
            else
                return false;
        }
        

};