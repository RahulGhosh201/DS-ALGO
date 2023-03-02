#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

int getLength(Node* head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp->next!=NULL)
    {   
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    print(head);
}