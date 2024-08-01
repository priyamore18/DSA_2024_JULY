#include<iostream>
using namespace std;
class priya{
    int a,b;

    public:
    priya(int a1,int  b1){
       this->a=a1;
       this->b=b1;

    }
    priya (priya& temp){
        this->a=temp.a;
       this->b=temp.b;

    }

    int display(){
        cout<<a;
        cout<<b;
    }


    

};
int main(){
    priya p1(10,20);
    priya n(p1);

    p1.display();
    n.display();

    return 0;

    

}