#include<iostream>
using namespace std;
class priya{
    private:
    int a;

    public:
     int geta(){
        return a;
     }
     int seta(int a){
        this->a=a;

     }

};
int main(){
    priya p1;
    p1.seta(10);
    cout<<"the value of the a"<<p1.geta();
    return 0;

}