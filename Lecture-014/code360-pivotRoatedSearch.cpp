//  Search In Rotated Sorted Array
// link: https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2


int search(vector<int>& arr, int n, int k)
{   

    // Function prototypes
    int getPivotIdx(vector<int>& arr, int n);
    int binarySearch(vector<int>& arr, int start, int end, int key);


    int pivot=getPivotIdx(arr,n);
   
    if(k>= arr[pivot] && k<= arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{//k>= arr[0] && k< arr[pivot]
        return binarySearch(arr,0,pivot-1,k);
    }
}


int getPivotIdx(vector<int>&arr,int n){

    int start=0;
    int end=n-1;
    int mid= start + (end-start)/2;

    while(start<end){
        
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }

        mid= start + (end-start)/2;

    }
    return start;
}

int binarySearch(vector<int>&arr, int start, int end, int key){


    int mid=start+(end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{//arr[mid]<key
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}
