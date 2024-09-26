#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter any positive number:";
    cin>>n;

    int i=2;
    while(i<n){
        if(n%i!=0){
            i++;
            
        }
        else{
            cout<<"It's Not Prime"<<endl;
            return 0;
        }
    }
    cout<<"It's Prime Number"<<endl;



    return 0;
}