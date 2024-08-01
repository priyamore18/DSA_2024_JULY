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
void insert_Middle(int position,Node *&head,int d){
    Node *middle=new Node(d);
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    middle->next=temp->next;
    temp->next=middle;

}
void insertTail(Node *&tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;

}
 void print(Node*&head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;

    }
    cout<<endl;

}

int main(){
    Node *new1=new Node(10);
    Node* head=new1;
    Node* tail=new1;
    print(head);
    insertTail(tail,11);
    print(head);
    insertTail(tail,12);
    print(head);
    insert_Middle(3,head,13);
    print(head);
    
}