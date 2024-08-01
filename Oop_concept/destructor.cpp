#include<iostream>
using namespace std;
class priya{
    public:
    priya(){
      cout<<"the constructor is called"<<endl;
    }
    
    ~priya(){
        cout<<"bhai ye to destructor haiiiii,machaoooooo!!!!!"<<endl;
    }

};
int main(){
    priya p1;
    priya *p=new priya();
    delete p;

}