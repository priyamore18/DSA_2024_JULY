#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int>s;
    s.push(10);
    s.push(9);
    s.pop();
    cout<<"the top element is"<<s.top();
    if(s.empty()){
        cout<<"the stack is the empty";
    }
}