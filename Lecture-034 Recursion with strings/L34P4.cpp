#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort1(int arr[],int size){

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

void bubbleSort(int arr[],int size){

    //base case -already sorted
    if(size==0 || size == 1){
        return;
    }

    //1 case solve - largest element placed in right place
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
     
    //recursive call
    bubbleSort(arr,size-1);


}

int main(){

    int arr[5] = {5,4,3,2,1};
    bubbleSort(arr,5);
    printArr(arr,5);


    return 0;
}