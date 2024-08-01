#include<iostream>
using namespace std;
bool getLinear(int n,int arr[],int k){
    if(n==0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }else{
        bool remain=getLinear(n-1,arr+1,k);
        return remain;
    }
    }
int main(){
    int n;
    cin>>n;
    int arr[5]={1,2,3,4,5};
    int k=9;
    int ans=getLinear(n,arr,k);
    if(ans){
        cout<<"present";
    }else{
        cout<<"absent";
    }
}