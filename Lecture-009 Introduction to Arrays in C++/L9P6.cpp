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
}

void reverseArr(int arr[],int size){
    int i=0;
    int j=size-1;

    cout<<"Reverse array is:";
    while(i<j){
        //swap(arr[i++], arr[j--]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){

    int arr[100];
    int size;
    cout<<"Enter no of element in an array:";
    cin>>size;
    
    inputArr(arr,size);

    reverseArr(arr,size);
    printArr(arr,size);


    return 0;
}
