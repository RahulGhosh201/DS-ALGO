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

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int countNodes(Node* head)
{
    Node* temp=head;
    int result=0;
    if(head!=NULL)
    {
        do{
            temp=temp->next;
            result++;
        }while(temp!=head);
    }
    return result;
}

int main()
{
    Node* head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,5);
    print(head);
    cout<<"No of nodes: "<<countNodes(head);
    return 0;
}