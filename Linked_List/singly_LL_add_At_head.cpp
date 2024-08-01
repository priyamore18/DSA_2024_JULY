#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
        
    }

};
void insert(Node* &head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;

    }
    cout<<endl;
}
int main(){
    Node *new1=new Node(10);
    Node*head=new1;
    insert(head,11);
    print(head);


}