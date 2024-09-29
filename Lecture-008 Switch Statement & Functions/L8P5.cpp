#include<iostream>
using namespace std;

int fact(int n){
    int factN=1;
    for(int i=1;i<=n;i++){
        factN*=i;
    }
    return factN;
}

int nCr(int n,int r){
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;

    int c=n-r;
    return (fact(n)/(fact(r)*fact(c)));
    
}
int main(){

    int n;
    int r;
    cout<<"nCr is:"<<nCr(n,r);

    return 0;
}