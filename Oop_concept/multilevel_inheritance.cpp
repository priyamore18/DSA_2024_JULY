#include<iostream>
using namespace std;
class priya{
    public:
    void menu(){
        cout<<"THIS IS THE FIRST NAME";
    }

};
class riya:public priya{

};
class siya:public riya{

};
int main(){
    siya s;
    s.menu();
    return 0;

}