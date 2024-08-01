#include<iostream>
using namespace std;
class priya{
   private:
    int a,b;
    public:
    priya(int a1,int b1){
        a=a1;
        b=b1;
    }

    priya(priya&temp){
        this->a=temp.a;
        this->b=temp.b;
    }
    int display(){
        cout<<a;
        cout<<b;
    }

};
int main(){
    priya p1(1,3);
    priya q(p1);
    p1.display();
    q.display();

}