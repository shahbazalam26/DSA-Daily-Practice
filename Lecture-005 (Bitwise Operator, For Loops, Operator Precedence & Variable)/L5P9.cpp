#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter number of term:";
    cin>>n;
    int fib1=0;
    int fib2=1;
    cout<<fib1<<" "<<fib2<<" ";
    for(int i=0;i<=n-3;i++){
        int fib3=fib1+fib2;
        cout<<fib3<<" ";

        fib1=fib2;
        fib2=fib3;

    }



    return 0;
}