#include<iostream>
using namespace std;
int main(){


    // 10 1 
    int a,b=1;
    a=10;
    cout<<a<<endl;
    cout<<b<<endl;
    if(++a){            //in c++ non-zero value consider true     
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else{
        cout<<++b<<endl;
    }
    
    cout<<a<<endl;
    cout<<b<<endl;


    return 0;
}