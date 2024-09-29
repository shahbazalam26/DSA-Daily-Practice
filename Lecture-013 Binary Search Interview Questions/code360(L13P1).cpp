//Question Links:
//- First/Last Occurrence of an Element in array: https://bit.ly/3Ioexjh



int firstOccur (vector<int>&arr, int size, int key) {

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

int lastOccur (vector<int>&arr, int size, int key) {

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

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
  pair<int, int> p;
  p.first = firstOccur (arr,n,k); 
  p.second = lastOccur (arr,n,k);
  return p; 
}

