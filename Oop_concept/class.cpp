#include<iostream>
using namespace std;
class priya{
      

      private:
      int n;

      public:
      int a=0;
      int b=1;

      int geter(){
        return n;
      }

      void setter(int n1){
        n=n1;
      }



      
};
int main(){
    priya p1;
    /*p1.a=0;
    p1.b=1;*/
    /*cout<<"a:"<<p1.a<<endl;
    cout<<"b:"<<p1.b<<endl;*/

    priya *p1=new priya();

    (*p1).setter(10);

    cout<<(*p1).geter();

   
   
    p1->setter(10);

    cout<<p1->geter();
    

    //cout<<sizeof(p1)<<endl;
}