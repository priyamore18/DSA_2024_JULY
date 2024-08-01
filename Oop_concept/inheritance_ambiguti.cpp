#include<iostream>
using namespace std;
class priya{
    public:
    void print(){
        cout<<"this the f1"<<endl;
    }


};
class riya{
    public:
    void print(){
        cout<<"this the f2"<<endl;
    }

};
class siya:public riya,public priya{

};
int main(){
    siya s;
    //s.print();
   
    //s.riya::print();
    s.priya::print();

    return 0;

}