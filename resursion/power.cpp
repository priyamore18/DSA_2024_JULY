#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return 1;
    }

    int small=print(n-1);
    int big=2*small;

    return big;
}
int main(){
    int n;
    cin>>n;
    int ans=print(n);
    cout<<ans;
}