#include<iostream>
using namespace std;
int square(int n,int start,int end){
    if(start>end){
        return -1;
    }

   int mid=start+(end-start)/2;
   int s=mid*mid;
   if(s==n){
    return mid;
   }
   if(s>n){
    return square(n,start,mid-1);
   }else{
    return square(n,mid+1,end);
   }
}
int main(){
    int n;
    cin>>n;
    int t=square(n,0,n);
    if(t!= -1){
        cout<<"the square root is"<<t;

    }
    else{
        cout<<"not exact square root";
    }
    
}
