#include<iostream>
using namespace std;
int print(int start,int end,int arr[]){
    for(int i=start;i<end;i++){
        cout<<arr[i];
        
    }
    cout<<endl;
}
bool binarysearch(int start,int end,int n,int k,int arr[]){
    print(start,end,arr);
    if(start>end){
        return false;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==k){
        return true;
    }
   
    if(arr[mid]>k){
        return binarysearch(start,mid-1,n,k,arr);
    }else{
        return binarysearch(mid+1,end,n,k,arr);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[5]={1,2,3,4,5};
    int key=5;
   int  ans=binarysearch(0,5,5,key,arr);

   if(ans){
    cout<<"present";
   }else{
    cout<<"absent";
   }
}