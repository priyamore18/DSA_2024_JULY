#include<iostream>
#include<cstring>
using namespace std;
bool check(string str,int s,int e){
    if(s>e){
        return true;
    }

    if(str[s]!=str[e]){
        return false;
    }else{
        return check(str,s+1,e-1);
    }
}
int main(){
    string str="abbad";
    bool c=check(str,0,str.length()-1);
    if(c){
        cout<<"it is the palindrome";
    }else{
        cout<<"it is not a palindrome";
    }

    return 0;
}