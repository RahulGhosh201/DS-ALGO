#include<iostream>
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

void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
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

int main()
{
    int data=0;
    cout<<"Enter the data:"<<endl;
    cin>>data;
    Node* node1=new Node(data);
    Node* head=node1;
    cout<<"Before insertion:"<<endl;
    print(head);
    cout<<"After insertion:"<<endl;
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);
    insertAtHead(head,40);
    print(head);
    return 0;
}