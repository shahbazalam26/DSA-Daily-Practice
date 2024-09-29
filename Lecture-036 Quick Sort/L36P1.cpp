#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){

    int cnt=0;
    for(int i=s+1; i<=e; i++){
        if(arr[s] >= arr[i]){
            cnt++;
        }
    }

    //place element at right position
    int pivotIndex = s+cnt;
    swap(arr[s],arr[pivotIndex]);

    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=arr[pivotIndex]){     //<= reminder
            i++;
        }
        while(arr[j]>arr[pivotIndex]){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int arr[],int s,int e){

    //base case
    if(s>=e){
        return;
    }
    
    int p = partition(arr,s,e); //partition karenge <a | a | >a
    quickSort(arr,s,p-1); //left part sort
    quickSort(arr,p+1,e); //right part sort

}
int main(){

    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6 };
    quickSort(arr,0,7);

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}