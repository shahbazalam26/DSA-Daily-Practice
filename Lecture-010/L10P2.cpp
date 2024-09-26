#include<iostream>
using namespace std;

void inputArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter element at index ["<<i<<"]:";
        cin>>arr[i];
    }
    return;
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main (){

    int arr[100];
    int size;
    cout<<"Enter no of element in an array:";
    cin>>size;
    inputArr(arr,size);
    cout<<unique(arr,size);



    return 0;
}