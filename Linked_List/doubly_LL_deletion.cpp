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
void insertAtHead(Node *&head,int d,Node *&tail){
    if(head== NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;

    }else{
     Node *temp=new Node(d);
    temp->next=head;
    head->pre=temp;
    head=temp;

    }
    

}
void insertAt_Tail(Node *&tail,int d,Node *&head){
    if(tail==NULL){
         Node *temp=new Node(d);
         head=temp;
        tail=temp;
    }else{
    Node *temp=new Node(d);
    temp->pre=tail;
    tail->next=temp;
    tail=temp;
     
    }
    
}

void insertAtMiddle(Node *&head,int d,int position,Node*&tail){
    if(position==1){
        insertAtHead(head,d,tail);
        return;
    }
    Node *m=new Node(d);
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAt_Tail(tail,d,head);
        return;
    }
    m->next=temp->next;
    temp->next=m;
    temp->next->pre=m;
    m->pre=temp;


}
void deletion(int position,Node *&head,Node*&tail){
    if(position==1){
        Node *temp=head;
        temp->next->pre=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    
    }else{
        Node*prea=NULL;
        Node*curr=head;
        int cnt=1;
        while(cnt<position){
            prea=curr;
            curr=curr->next;
            cnt++;
        }

        
            
            
            prea->next=curr->next;

        
            tail=curr->pre;
      
        
        //curr->next->pre=prea;
        curr->pre=NULL;
        curr->next=NULL;
        delete curr;



    }
}
int main(){
    Node *new1=new Node(10);
    Node* head=new1;
    Node*tail=new1;
    print(head);
    
    insertAtHead(head,9,tail);
    print(head);
    insertAt_Tail(tail,11,head);
    print(head);
    cout<<len(head)<<endl;
    insertAtMiddle(head,12,2,tail);
    print(head);
    deletion(1,head,tail);
    print(head);

    deletion(3,head,tail);

    print(head);
    insertAtMiddle(head,190,1,tail);
    print(head);
    insertAtMiddle(head,190,4,tail);
    print(head);
     insertAtMiddle(head,200,5,tail);
    print(head);
     
   
     
}