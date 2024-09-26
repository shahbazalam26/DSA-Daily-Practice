#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter number of terms for sum:";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        // sum=sum+i;
        sum+=i;

    }
    cout<<"Sum from 1 to n is:"<<sum<<endl;

    return 0;
}