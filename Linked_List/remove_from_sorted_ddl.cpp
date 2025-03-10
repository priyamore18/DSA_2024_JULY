/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here
    if(head==NULL){
        return NULL;
    }
    Node*temp=head;
    while(temp!=NULL){
        if( (temp->next !=NULL)&&temp->data==temp->next->data ){
            Node*next_next=temp->next->next;
            Node* delete_Node=temp->next;
            delete delete_Node;
            if (next_next != NULL) {
                next_next->prev = temp;
            }
            temp->next=next_next;
            

        }else{
            temp=temp->next;
        }
        
    }
    return head;
    
}
