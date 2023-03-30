#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
    Node(int data)//constructor
    {
        this->data=data;
        this->next=NULL;
    }
};



Node* kReverse(Node* head,int k){
    //base case
    if(head==NULL){
        return NULL;
    }
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=kReverse(next,k);
    }
    return prev;
}


void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

void insertAtEnd(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}


int main()
{
    int data=0;
    cout<<"Enter the data:"<<endl;
    cin>>data;
    Node* node1=new Node(data);
    Node* tail=node1;
    Node* head=node1;
    print(head);
    insertAtEnd(tail,25);
    print(head);
    cout<<findMiddle(head)<<endl;
    return 0;
}

