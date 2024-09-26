#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"Enter n:";
    cin>>n;

    int i=n;
    
    while(i>=1){
        

        int j=1;
        while(j<=i){
           cout<<j;
           j++;
        }

        int space=n-i;
        while(space){
            cout<<"*";
            space--;
        }

        int space1=n-i;
        while(space1){
            cout<<"*";
            space1--;
        }

        int k=1;
        while(k<=i){
           cout<<i-k+1;
           k++;
        }

        cout<<endl;
        i--;
    }

    return 0;
}