#include<iostream>
using namespace std;

int num=10; //global variable

void a(){
    cout<<"in a "<<num<<endl;
    num++;
}

void b(){
    cout<<"in b "<<num<<endl;
}

void c(int& n){ //reference variable
    cout<<"in c: "<<n<<endl;
}

void d(int& n){
    cout<<"in d:"<<n<<endl;
}

int main(){
    
    //global variable
    cout<<"in main "<<num<<endl;
    a();
    b();

    //reference variable
    int n=5;
    cout<<"in main:"<<n<<endl; 
    c(n);
    d(n);



    return 0;
}