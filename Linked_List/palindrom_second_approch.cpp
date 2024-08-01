//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*#include<vector>
class Solution{
  private:
  bool  checkPalin(vector<int>arr){
      int s=0;
      int e=arr.size()-1;
      //int e=n-1;
      while(s<=e){
          if(arr[s]!=arr[e]){
              return 0;
          }
          s++;
          e--;
      }
      return 1;
  }
  
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node* temp=head;
        vector<int>arr;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return checkPalin(arr);
    }
    
    
};*/

//second approch
class Solution{
    private:
Node* middle(Node*&head){
    Node*first=head;
    Node*second=head->next;
    while(second!=NULL && second->next!=NULL){
        second=second->next->next;
        
        first=first->next;
    }
    return first;
}
Node* reverse(Node *&head){
    Node*curr=head;
    Node* pre=NULL;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
        
        
    }
    return pre;
    
}
 public:
 
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        
        if(head->next==NULL){
            return true;
        }
        Node *mid=middle(head);
        Node* temp=mid->next;
        mid->next=reverse(temp);
        
        Node* head1=head;
        Node* head2=mid->next;
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            head2=head2->next;
            head1=head1->next;
            
        }
        return true;
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends