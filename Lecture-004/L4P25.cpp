#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"Enter n:";
    cin>>n;

    int i=1;
    
    while(i<=n){
        
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        
        int j=1;
        while(j<=i){
           cout<<j;
           j++;
        }

        int k=1;
        while(k<i){
           cout<<i-k;
           k++;
        }

        int space1=n-i;
        while(space1){
            cout<<" ";
            space1--;
        }

    
        cout<<endl;
        i++;
    }

    return 0;
}