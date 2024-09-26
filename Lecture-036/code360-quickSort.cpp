// - Quick Sort: https://bit.ly/3qZ6LEC

#include <bits/stdc++.h> 

int partition(vector<int>&arr,int s,int e){

    int cnt=0;
    for(int i=s+1 ;i<=e;i++){
        if(arr[s] >= arr[i]){
            cnt++;
        }
    }

    //place element at right position
    int pivotIndex = s+cnt;
    swap(arr[s],arr[pivotIndex]);

    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=arr[pivotIndex]){
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

void quickSort1(vector<int>&arr,int s,int e){

    //base case
    if(s>=e)
        return;
    
    int p = partition(arr,s,e); //partition karenge <a | a | >a
    quickSort1(arr,s,p-1); //left part sort
    quickSort1(arr,p+1,e); //right part sort

}


vector<int> quickSort(vector<int> arr)
{
    quickSort1(arr,0,arr.size()-1);
    return arr;
}
