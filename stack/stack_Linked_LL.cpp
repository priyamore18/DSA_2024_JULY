#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
      Node(int data){
        this->data=data;
        next=NULL;
      }

};
class stack{
    public:
    Node* top;
    stack(){
        top=NULL;
    }

    void push(int d){
        
            Node*temp=new Node(d);
            temp->data=d;
            temp->next=top;
            top=temp;
        
    }

    void pop(){
        if(top!=NULL){
             Node* temp1=top;
            top=top->next;
            delete(temp1);

        }
        else{
            cout<<"the stack is the underflow";
        }
    }

    bool isempty(){
        top==NULL;
    }
    
    int peak(){
        if(!isempty()){
            return top->data;
        
    }
    else{
        cout<<"the stack is the empty";
        return -1;
        
    }}


};
int main(){
   stack s;
   s.push(10);
   s.push(9);
   s.pop();
   cout<<"the peak element is the "<<s.peak();


}