#include<iostream>
using namespace std;
class priya{
    public:
    int a;
    int b1;
    priya(int a1,int b){
        a=a1;
        b1=b;
    }

    int geta(){
        return a;
    }

   int getb(){
    return b1;
   }

};
int main(){
    priya p1(10,11);
    cout<<"the value is the A"<<p1.geta()<<endl;
    cout<<"the value is the B"<<p1.getb();
    return 0;


}