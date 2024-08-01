#include<iostream>
using namespace std;
class priya{
    public:
    int a1,b1;
   
    priya(int a,int b){
     a1=a;
     b1=b;
    }

    int geta(){
        return a1;
    }
    int getb(){
        return b1;
    }


};

class riya:public priya{
    public:
    riya(int a,int b):priya(a,b){

    }
    

};
int main(){
riya object(10,11);
cout<<object.geta()<<endl;
cout<<object.getb()<<endl;
}