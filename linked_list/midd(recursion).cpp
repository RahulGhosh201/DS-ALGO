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

Node* getMiddle(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }

    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;

}

Node* findMiddle(Node* head){
    return getMiddle(head);
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

