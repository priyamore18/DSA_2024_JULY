#include<iostream>
#include<algorithm>
using namespace std;
int print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int sort_array(int arr[],int n, int index)
{   
    print(arr,5);
    if(index==n){
        return 0;
    }
    int min_index=index;
    for(int i=index+1;i<n;i++){
        if(arr[index]>arr[i]){
            min_index=i;
            
        }
        
     }
     if(index!=min_index){
            swap(arr[min_index],arr[index]);
        }
    return sort_array(arr,n,index+1);
}


int main(){
    int arr[5]={1,3,4,2,5};
    sort_array(arr,5,0);
    print(arr,5);
    
}