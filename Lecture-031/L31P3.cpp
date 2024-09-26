#include<iostream>
using namespace std;

void cnt(int n){

    //base case
    if(n==0){
        return;
    }

    // cout<<n<<" "; //tail print

    //recursive relation
    cnt(n-1);
    cout<<n<<" "; //head print
}


int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;
    cnt(n);
    
    return 0;
}