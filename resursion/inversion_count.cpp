#include<iostream>
using namespace std;
int inversion_count(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[5]={1,20,6,4,5};
    int a=inversion_count(arr,5);
    cout<<a;
    return 0;

}