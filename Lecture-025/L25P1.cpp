#include<iostream>
using namespace std;
int main(){

    int n=5;
    int *p = &n;
    cout<<n<<endl;  //print value of n
    cout<<p<<endl;  //print address
    cout<<*p<<endl;  //print value
    cout<<"Address of num is: "<<&n<<endl; //print adress of n


    double d = 4.3;
    double *p2 = &d;
    cout<<"address of d is: "<<p2<<endl;
    cout<<"value of d is: "<<*p2<<endl;

    cout<<"size of integer is: "<<sizeof(n)<<endl;
    cout<<"size of pointer is: "<<sizeof(p)<<endl;


    cout<<"size of double is: "<<sizeof(d)<<endl;
    cout<<"size of pointer is: "<<sizeof(p2)<<endl;

    int *p3;
    cout<<*p3<<endl; //garbage value

    // int *p4 = 0;
    // cout<<*p4<<endl; // not print bcz 0 ko point kar rha hai...


    int i = 10;
    
    int *q  = &i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *r = 0;
    r = &i;
    cout<<r<<endl;
    cout<<*r<<endl;




    int num = 5;
    int a = num;
    a++;
    cout<<num<<endl;



    int *v = &num;
    int b= *v;
    b++;
    cout<<num<<endl; 



    int price = 45;
    cout<<"before price: "<<price<<endl;
    int *pointer = &price;
    (*pointer)++;
    cout<<"after price: "<<price<<endl;




    int *copy = pointer;
    cout<<"copy pointer"<<endl;
    cout<<pointer<<" - "<<copy<<endl;
    cout<<*pointer<<" - "<<*copy<<endl;





    //important concept

    int w = 3;
    int *t = &w;
    // cout<< (*t)++ <<end;
    *t = *t + 1;
    cout<< *t <<endl; //4
    cout<<t<<endl;
    t=t+1;
    cout<<t<<endl;


    return 0;
}