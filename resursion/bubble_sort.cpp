#include<iostream>
#include<algorithm>
using namespace std;
int print(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int bubble_sort(int arr[],int size){
    print(arr);
    if(size==0 || size==1){
        return 0;
    }

    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    return bubble_sort(arr,size-1);
}

int main(){
    int arr[5]={1,2,6,4,3};
    print(arr);
    bubble_sort(arr,5);
}