// - Binary Search: https://bit.ly/3eQrSna

int binarySrch(vector<int>&arr,int s,int e,int key){

    if(s>e) return -1; //base case
    int mid = s + (e-s)/2;
    if(arr[mid]==key) return mid;
    
    if(arr[mid]<key) return binarySrch(arr,mid+1,e,key); //recursive call
    else return binarySrch(arr,s,mid-1,key); //recursive call
    
}


int search(vector<int> &nums, int target) {
    
    int s=0;
    int e=nums.size()-1;
    return binarySrch(nums,s,e,target);
    
}