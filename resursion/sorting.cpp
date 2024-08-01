#include<iostream>
using namespace std;
bool isSort(int n,int arr[]){
    if(n==0 || n==1){
        return true;
    }
    
    
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool name=isSort(n-1,arr+1);
        return name;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[5]={1,2,3,3,4};
    
    bool ans=isSort(n,arr);
    if(ans){
        cout<<"the arr is sorted";
    }else{
        cout<<"it is not sorted";
    }
}