#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter n:";
    cin>>n;

    int sum=0;
    int i=2; 
    while(i<=n){ 
        if(i%2==0){
            sum=sum+i;
        }
        i++;
        
    }
    
    cout<<"Sum of all even nnumbers is:"<<sum<<endl;

    return 0;
}