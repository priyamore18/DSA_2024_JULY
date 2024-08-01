#include<iostream>
using namespace std;
void print(int src,int dest){
    cout<<"sorce"<<src<<"dest"<<dest<<endl;

    if(src==dest){
        cout<<"finally reached";
        return;
    }
    
    src++;
    print(src,dest);


}
int main(){
    int src=1;
    int dest=10;
    print(src,dest);
}