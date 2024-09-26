#include<iostream>
using namespace std;

int calcPower(int a,int b){

    //base case
    if(b==0){
        return 1;
    }

    //recursive call
    int ans = calcPower(a,b/2);

    if(b&1){ //odd return true
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }

}

int main(){

    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    int ans = calcPower(a,b);
    cout<<ans<<endl;

    cout<<3*243*243<<endl;

    return 0;
}