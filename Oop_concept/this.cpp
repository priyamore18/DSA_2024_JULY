#include<iostream>
using namespace std;
class priya{
    public:
    int a;
    priya(int a){
        this->a=a;
    }
    int geta(){
        return a;
    }
};
int main(){
    priya p1(10);
    cout<<"the value of the a"<<p1.geta();

}