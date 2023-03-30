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



Node* reverseLinkedList(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
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
    reverseLinkedList(head);
    print(head);
    return 0;
}

