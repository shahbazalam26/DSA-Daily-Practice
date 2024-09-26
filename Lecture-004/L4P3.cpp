#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter n:";
    cin>>n;
    int i=1;
    int cnt=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<cnt<<" ";
            cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }






    return 0;
}