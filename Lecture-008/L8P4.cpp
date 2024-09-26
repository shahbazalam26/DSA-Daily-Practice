#include<iostream>
using namespace std;
bool evenOdd(int num){
    cout<<"Enter any number:";
    cin>>num;
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){

    int num;
    if(evenOdd(num)==1){
        cout<<"given no is Even"<<endl;
    }
    else{
        cout<<"given no is odd"<<endl;
    }

    return 0;
}