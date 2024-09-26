#include<iostream>
using namespace std;
bool isPrime(int num){
    cout<<"Enter any positive number:";
    cin>>num;

    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){

    int n;
    if(isPrime(n)==1){
        cout<<"Given number is prime number."<<endl;
    }
    else{
        cout<<"Given number is'nt prime number."<<endl;
    }









    return 0;
}