#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter any alphabet or number:";
    cin>>ch;
    
    if(ch>=65 && ch<=90){
        cout<<"This is Uppercase";
    }
    else if(ch>=92 && ch<=122){
        cout<<"This is Lowercase";
    }
    else if(ch>=48 && ch<=57){
        cout<<"This is Numeric";
    }
    else{
        cout<<"Not valid";
    }


    return 0;
}