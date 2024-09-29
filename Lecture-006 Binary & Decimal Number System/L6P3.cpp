#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter Binary Number:";
    cin>>n;
    
    int ans=0;
    int i=0;

    while(n!=0){

        int digit=n%10; //1&n;

        if(digit==1){
            ans=pow(2,i)+ans;
        }
        n=n/10; 
        i++;

    }
    
    cout<<"Decimal No is:"<<ans<<endl;



    return 0;
}