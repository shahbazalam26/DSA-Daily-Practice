#include <iostream>
using namespace std;

int firstOccur (int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid = start + (end-start)/2;

    }
    return ans;

} 

int lastOccur (int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans=-1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end-start)/2;

    }
    return ans;

} 
int totalOccur (int arr[], int size, int key){

    int last = lastOccur(arr, size, key);
    int first = firstOccur(arr, size, key);
    int total = (last - first) + 1;

} 

int main(){

    int arr[7] = {1,2,3,3,3,3,5};
    cout<<totalOccur(arr,7,2);



    return 0;
}