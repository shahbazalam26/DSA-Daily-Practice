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

void reverseAlternate(int arr[],int size){

    for(int i=0;i<size;i+=2){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
    return;

}
int main(){

    int arr[100];
    int size;
    cout<<"Enter no of element in an array:";
    cin>>size;
    
    inputArr(arr,size);
    reverseAlternate(arr,size);
    printArr(arr,size);

    
    return 0;
}