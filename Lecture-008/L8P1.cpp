#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter a:";
    cin>>a;

    cout<<"Enter b:";
    cin>>b;

    char op;
    cout<<"Enter operation you want to perform:";
    cin>>op;

    switch(op){
        case '+': cout<<(a+b)<<endl;
                  break;
        case '-': cout<<(a-b)<<endl;
                  break;
        case '*': cout<<(a*b)<<endl;
                  break;
        case '/': cout<<(a/b)<<endl;
                  break;
        case '%': cout<<(a%b)<<endl;
                  break;
        default: cout<<"please enter a valid operation."<<endl;
    }


    return 0;
}