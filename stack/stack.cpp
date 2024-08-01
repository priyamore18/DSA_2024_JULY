#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;
    stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }

    void push(int element){
        if(size-top>=1){
             top++;
            arr[top]=element;
           

        }else{
            cout<<"stack is the  overflow";
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack is the underflow";
        }
    }

    int peak(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"the stack is empty";
            return -1;
        }
    }
   

};
int main(){
    stack s(5);
    s.push(10);
    s.push(9);
    //s.pop();
    cout<<"the peak element is "<<s.peak();
    return 0;

}