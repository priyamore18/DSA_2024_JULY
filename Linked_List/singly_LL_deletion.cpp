#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

    ~Node(){
        int val=this->data;
        
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the value is the deleted"<<val<<endl;
    }

};
void inserthead(Node* &head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;

}
void insertTail(Node *&tail,int d){
   Node *temp=new Node(d);
   tail->next=temp;
   tail=temp;
}
void insertMiddle(Node *&tail,Node *&head,int position,int d){
   Node *middle=new Node(d);
   Node*temp=head;
   //for the inserting the first
   if(position==1){
    inserthead(head,d);
    return;
   }
   int cnt=1;
   while(cnt<position-1){
    temp=temp->next;
    cnt++;
   }

   if(temp->next==NULL){
    insertTail(tail,d);
    return;
   }

   middle->next=temp->next;
   temp->next=middle;

}
void deletion(Node *&head,Node *&tail,int position){

    if(position==0){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node* pre=NULL;
        Node*curr=head;
        int cnt=1;
        while(cnt<position){
            pre=curr;
            curr=curr->next;
            cnt++;

        }
        pre->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node *&head){
    Node*temp=head;
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
    inserthead(head,11);
    print(head);
    insertTail(tail,12);
    print(head);
    insertMiddle(tail,head,3,13);
    print(head);
    insertMiddle(tail,head,1,90);
    print(head);
    insertMiddle(tail,head,6,90);
    print(head);
    deletion(head,tail,2);
    print(head);

}