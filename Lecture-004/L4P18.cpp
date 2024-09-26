#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"Enter n:";
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}