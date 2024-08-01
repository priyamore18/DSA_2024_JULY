#include<iostream>
using namespace std;
int peak(int start,int end,int arr[]){
    if(start==end){
        return start;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]<arr[mid+1]){
        return peak(mid+1,end,arr);
    }else{
         return peak(start,mid,arr);
    }
}
int main(){
     int arr[4]={3,4,5,1};
    int a=peak(0,3,arr);
    if(a){
        cout<<"the element at the index"<<a;
    }

}