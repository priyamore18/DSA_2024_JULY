#include<iostream>
using namespace std;
int print(int n){
    
    if(n==0){
        return true;
    }
     cout<<n;
    print(n-1);
   
}
int main(){
    int n;
    cin>>n;
    print(n);
}