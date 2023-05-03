#include<bits/stdc++.h>
using namespace std;

class TwoStack{
    int *arr;
    int top1,top2,size;
    public:
        TwoStack(int s){
            this->size=s;
            top1=-1;
            top2=s;
            arr=new int[s];
        }
        void push(int num){
            if(top2-top1>1){
                top1++;
                arr[top1]=num;
            }
            else{
                cout<<"Stack overflowed"<<endl;
            }
        }
        void push2(int num){
            if(top2-top1>1){
                top2++;
                arr[top2]=num;
            }
            else{
                cout<<"Stack overflowed"<<endl;
            }
        }
        int pop1(){
            if(top1>0){
                int ans=arr[top1];
                top1--;
                return ans;
            }
            else{
                return -1;
            }
        }
        int pop2(){
            if(top2<size){
                int ans=arr[top2];
                top2++;
                return ans;
            }
            else{
                return -1;
            }
        }
}