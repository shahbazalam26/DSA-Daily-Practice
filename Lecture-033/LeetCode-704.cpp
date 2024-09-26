// https://leetcode.com/problems/binary-search/


class Solution {
private:
    int binarySrch(vector<int>&nums, int s,int e,int key){

        if(s>e) return -1;
        int mid = s+(e-s)/2;
        if(nums[mid]==key) return mid;
        if(nums[mid]<key) return binarySrch(nums,mid+1,e,key);
        else return binarySrch(nums,s,mid-1,key);

    }
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        return binarySrch(nums,s,e,target);
    }
};