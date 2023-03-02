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

// int getLength(Node* head)
// {
//     int len=0;
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }

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

void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    temp->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtAnyPosition(Node* &head,Node* &tail,int pos,int d)
{
    int cnt=1;
    Node* temp=head;
    while(pos-1>cnt)
    {
        cnt++;
        temp=temp->next;
    }
    if(pos==1)
    {
        insertAtHead(head,d);
        return;
    }
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
int main()
{
    Node* node1=new Node(10);
    Node* tail=node1;
    Node* head=node1;
    print(tail);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    print(tail);
}