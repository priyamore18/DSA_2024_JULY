#include<iostream>
using namespace std;
int getSum(int n,int arr[]){
    if(n==0){
        return 0;
    }

    if(n==1){
        return arr[0];

    }
    int remain=getSum(n-1,arr+1);
    int sum=arr[0]+remain;
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[5]={1,2,3,4,5};
    int a=getSum(n,arr);
    cout<<a;
}