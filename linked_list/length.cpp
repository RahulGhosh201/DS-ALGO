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

void insertAtEnd(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
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
    int size=0;
    cout<<"Enter number of nodes:"<<endl;
    cin>>size;
    cout<<"Enter the data of nodes"<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Node* node1=new Node(arr[0]);
    Node* head=node1;
    Node* tail=node1;
    //print(head);
    for(int i=1;i<size;i++){
        insertAtEnd(tail,arr[i]);
    }
    cout<<"Values of the nodes:"<<endl;
    print(head);
    int length=getLength(head);
    cout<<"Total no of nodes present in the LL:"<<length<<endl;
    return 0;
}
