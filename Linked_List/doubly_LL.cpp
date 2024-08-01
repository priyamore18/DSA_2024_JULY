#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* pre;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->pre=NULL;
    }
};
void print( Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;


    }
    cout<<endl;
}
int len(Node*&head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;

    }
    return count;
}
// here the inserted at the head
void insertAtHead(Node *&head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head->pre=temp;
    head=temp;

}
void insertAt_Tail(Node *&tail,int d){
    Node *temp=new Node(d);
    temp->pre=tail;
    tail->next=temp;
    tail=temp;
}

void insertAtMiddle(Node *&head,int d,int position){
    Node *m=new Node(d);
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    m->next=temp->next;
    temp->next=m;
    temp->next->pre=m;
    m->pre=temp;


}
int main(){
    Node *new1=new Node(10);
    Node* head=new1;
    Node*tail=new1;
    print(head);
    
    insertAtHead(head,9);
    print(head);
    insertAt_Tail(tail,11);
    print(head);
    cout<<len(head)<<endl;
    insertAtMiddle(head,12,2);
    print(head);
   
     
}