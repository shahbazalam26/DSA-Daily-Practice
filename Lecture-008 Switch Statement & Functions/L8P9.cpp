#include<iostream>
using namespace std;

int bitt(int n){
    int cnt=0;
    while(n!=0){
        if(n%2==1){
            cnt++;
        }
        n=n/2;
    }
    return cnt;
}
int totalSetBits(int a,int b){
    return (bitt(a)+bitt(b));
}

int main(){

    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;

    cout<<"Total no of sets bits is:"<<totalSetBits(a,b);

    return 0;
}