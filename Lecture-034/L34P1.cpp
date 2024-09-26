#include<iostream>
using namespace std;

void reverseUsingRR(string &str,int i,int j){

    cout<<"Call recrived for:  "<<str<<endl;
    
    //base case
    if(i>j) return;
    swap(str[i++],str[j--]);   //n-i-1
    return reverseUsingRR(str,i,j);
}


int main(){

    string name = "shahbaz";
    reverseUsingRR(name,0,name.length()-1);
    cout<<name;

    return 0;
}