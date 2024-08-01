#include<iostream>
using namespace std;
int merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];
    
    int k=s;
    for(int i=0;i<len1;i++){
       first[i]=arr[k++];

    }
    int x=mid+1;
    for(int i=0;i<len2;i++){
       second[i]=arr[x++];

    }

    int i=0;
    int j=0;
    int main_index=s;
    while(i<len1 && j<len2){
        if(first[i]<=second[j]){
            arr[main_index++]=first[i++];
        }else{
            arr[main_index++]=second[j++];
        }
    }

    while(i<len1){
        arr[main_index++]=first[i++];
    }
    while(i<len2){
        arr[main_index++]=second[i++];
    }
    delete []first;
    delete []second;


}

int merge_sort(int arr[],int s,int e){
    
    if(s>=e){
        return 0;
    }
    int mid=s+(e-s)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);

    merge(arr,s,e);

  
}

int print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int main(){
    int arr[5]={4,3,2,5,1};
    merge_sort(arr,0,4);
    merge(arr,0,4);
    print(arr,5);
    

}