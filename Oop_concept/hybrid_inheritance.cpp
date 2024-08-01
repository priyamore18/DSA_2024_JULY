#include<iostream>
using namespave std;
class priya{
    public:
    void f1(){
        cout<<"this is the f1";
    }
};
class riya:public priya{
    public:
    void f2(){
        cout<<"this is the f2";
    }
     
};
class diya:public riya{
    public:
    void f3(){
        cout<<"this is the f3";
    }

}
class siya:public diya,public riya{
    public:
    void f4(){
        cout<<"this is the f4";
    }
}
int main(){
    siya.s;
    s.f3();
    s.f4();
    s.f2();
    s.f1();

    return 0;

}