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



int getLength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

Node* findMiddle(Node* head){
    int len=getLength(head);
    int ans=len/2;
    Node* temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
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

