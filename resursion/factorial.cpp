#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return 1;
    }

    int smallproblem=print(n-1);
    int bigproblem=n*smallproblem;

    return bigproblem;
}
int main(){
    int n;
    cin>>n;
   int ans= print(n);
   cout<<ans;
} 