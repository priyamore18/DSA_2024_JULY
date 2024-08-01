// it is also called the sallow copy created 

#include<iostream>
#include <cstring>
using namespace std;
class priya{
    public:
    int a,b;
    char *pr;
    public:
    priya(int a1,int b1,char *r){
        a=a1;
        b=b1;
        pr = new char[strlen(r) + 1];
        strcpy(pr, r);
    }
    int display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<pr<<endl;
    }

};
int main(){
    priya p1(1,4,"priya");
    priya temp(p1);
    p1.display();
    temp.display();

    p1.pr[0]='s';

    p1.display();
    temp.display();
    return 0;

}