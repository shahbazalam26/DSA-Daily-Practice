#include<iostream>
using namespace std;
int nthTerm(int n){

    cout<<"Enter number of terms:";
    cin>>n;
    int nth=3*n+7;
    return nth;
}
int main(){

    int n;
    cout<<"Nth terms is:"<<nthTerm(n);

    return 0;
}