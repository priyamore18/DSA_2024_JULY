#include<iostream>
using namespace std;
class priya{
    int a;
    public:
    priya(int c){
        a=c;
    }
    int geta() const{
        a++;    // here we got the error can not the increment;
        return a;
    }

};
int main(){
    priya p(10);
   cout<<p.geta();

}