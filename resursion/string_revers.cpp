#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void reverse(string& str,int s,int e){
   cout<<str<<endl;
    if(s>e){
        return ;
    }
    swap(str[s],str[e]);
   /* s++;
    e--;*/

    return reverse(str,s+1,e-1);

    
}
int main(){
    string str="priya";
    reverse(str,0,str.length()-1);
    cout<<str;
    return 0;

    
}