#include<iostream>
using namespace std;

int power(int num,int power){
    int pow=1;
    for(int i=0;i<power;i++){
        pow*=num;

    }
    return pow;
}


// int decimalToBinary(int num){

//     int ans=0;
//     int i=0;
//     while(num!=0){
//         int bit=(num&1); //int bit=num%2;
//         ans+=(bit*power(10,i));
//         i++;
//         num=num>>1;
//         //num/=2;

//     }
//     return ans;
// }
int decimalToBinary(int n){

    int ans = 0;
    int pos = 1;
    while(n!=0){
        int rem = n%2;
        ans += rem*pos;
        pos =pos*10;
        n=n/2; 
        
    }

    return ans;
    
}


int main(){

    int n;
    cout<<"Enter decimal number:";
    cin>>n;

    int binary=decimalToBinary(n);
    cout<<"binary is:"<<binary;
  

    return 0;
}