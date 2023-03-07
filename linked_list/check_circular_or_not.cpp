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


int isCircular(Node* head){
    int ans=1;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        if(temp->next==NULL)
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    Node* head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,5);
    print(head);
    int ans=isCircular(head);
    if(ans==1){
        cout<<"Not circular"<<endl;
    }
    else{
        cout<<"circular"<<endl;
    }
    return 0;
}