#include<iostream>
using namespace std;

void setBit(int num){
   
    int cnt=0;
    while(num!=0){
        if(num%2==1){
            cnt++;
        }
        num=num/2;
    }
    if(cnt==1){
        cout<<"Yes! it's power of 2."<<endl;
        return;
    }
    else{
        cout<<"No it's power of 2."<<endl;
        return;
    }
}

int main(){

    int n;
    cout<<"Enter any number:";
    cin>>n;
    setBit(n);
    return 0;

}