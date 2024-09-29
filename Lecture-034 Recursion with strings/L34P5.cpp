#include<iostream>
using namespace std;

void insertionSort(int arr[],int n,int start = 1){
    
    //base case
    if(start >= n){
        return;
    }

    int temp = arr[start];
    int i=start-1;

    while(i>=0 && arr[i] > temp ){
        arr[i+1] = arr[i];
        i--;
    }

    arr[i+1] = temp;
    insertionSort(arr,n,start+1);
    
}

void selectionSort(int arr[],int n, int start=0){
    
    //base case
    if(start >= n){
        return;
    }

    int minIndex = start;
    for(int i=start;i<n;i++){
        if(arr[minIndex]>arr[i]){
            minIndex = i;
        }
    }

    swap(arr[minIndex],arr[start]);
    selectionSort(arr,n,start+1);
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[7] = {10,1,7,4,8,2,11};
    selectionSort(arr,7);
    print(arr,7);

}