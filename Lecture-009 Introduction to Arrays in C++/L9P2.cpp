#include<iostream>
#include <climits>
using namespace std;

void inputArray(int arr[],int size){

    cout<<"Enter element of an array"<<endl;
    for(int i=0;i<size;i++){
        cout<<"index"<<"["<<i<<"]:";
        cin>>arr[i];
    }
}

int getMax(int arr[],int size){
    int max=0;
    //int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        //maxi= max(maxi,arr[i]);
    }
    // return maxi;
    return max;
}

int getMin(int arr[],int size){
    
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        if(mini>arr[i]){
            mini=arr[i];
        }
        // mini= min(mini,arr[i]);
    }
    return mini;
}

int main() {

    int num[100];
    int size;
    cout<<"Enter number of element:";
    cin>>size;
    inputArray(num,size);
    cout<<"Min value is:"<<getMin(num,size)<<endl;
    cout<<"Max value is:"<<getMax(num,size)<<endl;


    return 0;
}