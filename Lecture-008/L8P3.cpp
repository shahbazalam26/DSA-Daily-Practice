#include<iostream>
#include<math.h>
using namespace std;
double power(int a,int b){
    
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter power of "<<a<<":";
    cin>>b;

    // int ans=1;
    // for(int i=1;i<=b;i++){
    //     ans=ans*a;
    // }
    // return ans;

    
    return pow(a,b);

}
int main(){


    int a;
    int b;
    cout<<"Answer is:"<<power(a,b);

    return 0;
}