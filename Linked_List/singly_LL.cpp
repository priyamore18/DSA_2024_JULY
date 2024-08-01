#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=next;
    }

};

 
int main(){
    Node *new1=new Node(10);
    cout<<new1->data<<endl;
    cout<<new1->next;
    return 0;

}