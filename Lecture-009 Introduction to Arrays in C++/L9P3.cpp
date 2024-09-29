#include<iostream>
using namespace std;

int sumOfArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter element at index ["<<i<<"]:";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

    int arr[100];
    int size;
    cout<<"Enter no of element in an array:";
    cin>>size;
    cout<<"Sum of all element in an array is:"<<sumOfArr(arr,size);

    return 0;
}