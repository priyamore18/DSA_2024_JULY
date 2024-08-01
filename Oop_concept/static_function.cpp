#include<iostream>
using namespace std;

class priya{
    public:
    priya();
    static int a;
    static int random(){
        return a;
    }
};
int priya::a=5;
int main(){
    cout<<priya::a<<endl;
    cout<<priya::random();
    return 0;

}