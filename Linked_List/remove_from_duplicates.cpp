#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    Node* temp1=head;
    
    //Node* curr=head;
    while(temp1!=NULL && temp1->next!=NULL){
        Node *temp=temp1;
        while(temp!=NULL&& temp->next!=NULL){
            
            if(temp->next!=NULL &&temp1->data==temp->next->data)
                {
                    Node * d=temp->next;
                    temp->next=temp->next->next;
                    delete d;

                }else{
                    temp=temp->next;
                }

                
            }
              
            temp1=temp1->next;
        }
        
    
    
    return head;
   
}