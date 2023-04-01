#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
}

bool isCircular(Node* head){
    Node* temp=head->next;
    if(head==NULL){
        return true;
    }
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}

void insertNode(Node * &tail, int element,int d){
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;//as the list was empty j node ta isert kor6i etai list r fast and last node hoay node r next node tai hbe
    }
    else{
        //in case of non-empty list
        Node* curr=tail;
        while(curr->data !=element){
            curr=curr->next;
        }//ekhane insert korar jnno ekti element recieved kore6i ei while loop chalie curr r position oi element j node e present sekhane pou6alam

        Node* temp= new Node(d);//ei ta oi element r node r pore nsert korbo
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* tail){
     Node* temp=tail;
     cout<<tail->data<<" ";//if there is oone node present in the list
     while(tail->next!=temp)
     {
        cout<<tail->data<<" ";
        tail=tail->next;
     }
     cout<<" ";
}
int main()
{
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    if(isCircular(tail)){
        cout<<"This linked list is circular"<<endl;
    }
    else{
        cout<<"This linked list is not circular"<<endl;
    }
    return 0;
}