#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void insertion_sort(int arr[],int size,int i){
    print(arr,size);
    if(i==size){
        return;
    }

    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }

    return insertion_sort(arr,size,i+1);

}

int main(){
    int arr[5]={1,5,3,2,4};
    insertion_sort(arr,5,1);
    print(arr,5);
}