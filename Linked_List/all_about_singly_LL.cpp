#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;

        
    }
};
 void intsertHead(Node*&head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
 }
 void insertTail(Node*&head,Node*&tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
 }
 void insertMiddle(Node*&head,Node*&tail,int d,int position){
    Node *temp=head;
    Node *middle=new Node(d);

    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    middle->next=temp->next;
    temp->next=middle;

 }
 void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
 }

 // deletion using the data
 void deletion(Node*&head,Node*&tail,int d){
    Node* pre=NULL;
    Node* curr=head;
    //int cnt=1;
    while(curr->data!= d){
        pre=curr;
        curr=curr->next;
        
    }
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;


 }
int main(){
    Node *new1=new Node(10);
    Node*head=new1;
    Node*tail=new1;
    intsertHead(head,11);
    print(head);
    insertTail(head,tail,12);
    print(head);
    insertMiddle(head,tail,13,2);
    print(head);
    deletion(head,tail,13);
    print(head);

}