#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    int m=print(n-1)+print(n-2);

    return m;
}
int main(){
    int n;
    cin>>n;
   int ans= print(n);
   cout<<ans;
}