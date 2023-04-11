#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top;
        Stack(int size){
            this->size=size;
            arr=new int[size];
            top=-1;
        }

        void push(int element){
            if(size-top>1){
                top++;
                arr[top]=element;
            }else{
                cout<<"Stack overflow"<<endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;
            }else{
                cout<<"Stack underflow"<<endl;
            }
        }
        int peek(){
            if(top>=0){
                cout<<arr[top]<<endl;
            }
            else{
                cout<<"Stack underflow"<<endl;
            }
        }

        bool isEmpty(){
            if(top>=0)
                return false;
            else
                return true;
        }
};


int main(){
    Stack st(5);
    st.push(22);
    st.push(10);
    st.push(21);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.->op();
    st->pop();
    if(st->isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    return 0;
}
