//binary search

#include <iostream>
using namespace std;

int binarySearch (int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if (arr[mid] == key){
            return mid;
        }

        else if (arr[mid] < key){
            //move to the right part
            start = mid+1;
        }

        else{
            //arr[mid]>key move to the left part
            end = mid-1;
        }
        //update mid
        mid = start + (end - start)/2;
    }
    //if key is'nt present
    return -1;
}

int main() {

    //create array of both size even and odd

    int evenArr[6] = {43,50,2,10,6,4};
    int oddArr[5] = {5,61,12,27,78};

    int n;
    cout << "Enter key for search in even size:";
    cin >> n;
    int evenSearch = binarySearch (evenArr,6,n);
    cout << n << " is present at index:" << evenSearch << endl;

    int m;
    cout << "Enter key for search in odd size:";
    cin >> m;
    int oddSearch = binarySearch (oddArr,6,m);
    cout << m << " is present at index:" << oddSearch << endl;



    return 0;
}