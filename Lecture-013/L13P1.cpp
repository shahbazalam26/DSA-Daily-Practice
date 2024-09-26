//first and last position of an element in sorted array

#include <iostream>
using namespace std;

int firstOccur (int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }

    return ans;

}

int lastOccur (int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }

    return ans;

}

int main() {
    
    int num[4] = {1,3,3,5};
    // int firstpos = firstOccur (num,8,2);
    cout << "first occurenece of element present at index:" << firstOccur (num,4,2) << endl;
    cout << "second occurence of element present at index:" << lastOccur (num,4,2) << endl;


    return 0;
}
