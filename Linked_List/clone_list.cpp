/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
void inserttail(Node *&head,Node*&tail,int d){
    Node *temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
public:
    Node* copyRandomList(Node* head) {
        Node* Randomhead=NULL;
        Node* Randomtail=NULL;
        Node *temp=head;
        while(temp!=NULL){
            inserttail(Randomhead,Randomtail,temp->val);
            temp=temp->next;
        }

      unordered_map<Node*, Node*> mapping;
      Node *t2=Randomhead;
      Node *t1=head;

      while(t1!=NULL && t2!=NULL){
        mapping[t1]=t2;
        t2=t2->next;
        t1=t1->next;
        }
        
        t2=Randomhead;
        t1=head;
        while(t1!=NULL){
            t2->random=mapping[t1->random];
            t2=t2->next;
            t1=t1->next;
        }



        return Randomhead; 
    }
   

};