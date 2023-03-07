#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void push(Node** head_ref,int new_data)
{
    Node* new_node=new Node(new_data);
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void printNodes(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int count(Node* &head,int key)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            count++;
        }
        temp=temp->next;
    }
    return count;
}

int main()
{
    Node* head=NULL;
    cout<<"Enter the value of key:"<<endl;
    int key=0;
    cin>>key;
    push(&head,1);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    push(&head,1);
    printNodes(head);
    cout<<"Key occurences: "<<count(head,key);
    return 0;
}