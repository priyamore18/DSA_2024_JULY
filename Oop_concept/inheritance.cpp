#include<iostream>
using namespace std;
class priya{
   protected:
   int height;
};
class riya:private priya{
    public: 
   int getheight(){
        return height;
    }
};
int main(){
    riya r1;
  cout<<r1.getheight();
  //cout<<r1.height;
   return 0;
    
}