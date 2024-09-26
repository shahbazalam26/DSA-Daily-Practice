#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"Enter n:";
    cin>>n;

    int i=n;
    
    while(i>=1){
        
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        
        int j=1;
        while(j<=i){
           cout<<n-i+j;
           j++;
        }
        cout<<endl;
        i--;
    }

    return 0;
}