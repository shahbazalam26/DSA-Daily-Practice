#include<iostream>
using namespace std;
int main(){

    float n;
    cout<<"Enter Temprature in Farhenheit:";
    cin>>n;

    float celcius=((n-32)*5)/9;

    cout<<"Celcius Temprature is:"<<celcius<<endl;
    

    return 0;
}