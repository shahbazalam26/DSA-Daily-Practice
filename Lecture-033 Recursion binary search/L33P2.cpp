#include<iostream>
using namespace std;

int ArrSum(int arr[],int size){
    
    //base case
    if(size==0){
        return 0;
    }

    return arr[0] + ArrSum(arr+1,size-1);
}

int main(){

    int arr[1] = {3};
    cout<<ArrSum(arr,1)<<endl;

    return 0;
}