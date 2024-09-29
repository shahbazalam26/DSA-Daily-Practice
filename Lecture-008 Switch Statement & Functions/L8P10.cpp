#include<iostream>
using namespace std;


int nthFib(int n){

    int fib1=0;
    int fib2=1;
    
    if(n==1){
        return fib1;
    }
    else if(n==2){
        return fib2;
    }
    else{
        int fib3;
        for(int i=2;i<n;i++){
            fib3=fib1+fib2;
            fib1=fib2;
            fib2=fib3;
        }
        return fib3;
    }
    
   
}
int main(){

    int n;
    cout<<"Enter nth term:";
    cin>>n;
    cout<<"fibonacci no is:"<<nthFib(n);

    return 0;
}