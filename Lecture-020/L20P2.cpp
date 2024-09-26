#include<iostream>
using namespace std;

void mergeTwoSortedArray(int arr1[],int n,int arr2[],int m,int arr[]){
    
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){

        if(arr1[i] > arr2[j]){
            arr[k++] = arr2[j++];
            // j++;
            // k++;
        }
        else{
            arr[k++] = arr1[i++];
            // i++;
            // k++;
        }
    }

    //copy first array element
    while(i<n){
        arr[k++]=arr1[i++];
        // i++;
        // k++;
    }

    //copy second array element
    while(i<m){
        arr[k++] = arr2[j++];
        // j++;
        // k++;
    }

    return;
}

//printing
void print(int ans[],int n){
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}


int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr[8];

    mergeTwoSortedArray(arr1,5,arr2,3,arr);
    print(arr,8);

    return 0;
}