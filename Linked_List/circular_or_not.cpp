#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};
void insert(Node*&tail,int element, int d){
    Node *new1=new Node(d);
    if(tail==NULL){
        tail=new1;
        new1->next=new1;
        
    }else{

        Node* cur=tail;
        while(cur->data!=element){
            cur=cur->next;
        }
        new1->next=cur->next;
        cur->next=new1;
    }
}

void delete_LL(Node*& tail,int element){
    if(tail== NULL){
        cout<<"the list is the empty";
    }else{
    Node* pre=tail;
    Node * curr=pre->next;
    while(curr->data!=element){
        pre=curr;
        curr=curr->next;
       
    }
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;


    }
    

}

void print( Node*&tail){
    Node *temp=tail;
    if(tail==NULL){
        cout<<"list is the empty";
    }
   do{
      cout<<tail->data;
      tail=tail->next;

    }while(tail!=temp);
    cout<<endl;

}
bool CheckCircular(Node*&head){
    
     if(head==NULL){
        return true;
     }

     Node* temp=head->next;

     while(temp!=NULL && temp!=head){
        temp=temp->next;
     }
     if(head==temp){
        return true;
     }
     else{
        return false;
     }}

int main(){
    Node *tail=NULL;
    Node *head=NULL;
    insert(tail,12,3);
    print(tail);
    insert(tail,3,4);
    print(tail);
    insert(tail,4,5);
    print(tail);
   // delete_LL(tail,4);
   // print(tail);
   if(CheckCircular){
    cout<<"this is circular in the nature";
   }else{
    cout<<"it is not circular in the nature";
   }

}