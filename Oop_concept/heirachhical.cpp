#include<iostream>
using namespace std;
class priya{
    public:
    void f1(){
        cout<<"this the f1"<<endl;
    }

};
class riya:public priya{
    public:
    void f2(){
        cout<<"this the f2"<<endl;
    }

};
class siya:public priya{
    public:
   void f3(){
        cout<<"this the f3"<<endl;
    }

};
int main(){
    siya s;
    s.f1();
    s.f3();
    riya r;
    r.f1();
    r.f2();

    return 0;

}