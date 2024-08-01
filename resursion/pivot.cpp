#include<iostream>
using namespace std;
int pivot(int arr[],int start,int end){
    if(start==end){
        return end;
    }

    int mid=start+(end-start)/2;
    if(arr[mid]>=arr[0]){
        return pivot(arr,mid+1,end);

    }else{
        return pivot(arr,start,mid);
}
}
    
int main(){
    int arr[6]={7,9,10,1,2,3};
    int ans=pivot(arr,0,5);
    cout<<"the pivot element is"<<ans;

}