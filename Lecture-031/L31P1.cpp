#include<iostream>
using namespace std;
 
int factorial(int n){

    //base case
    if(n==0){
        return 1;
    } 

    // int smProb = factorial(n-1);
    // int bigProb = n*smProb;
    // return bigProb;
    return n*factorial(n-1);
}

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;


    return 0;
}